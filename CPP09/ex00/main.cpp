#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
#include <cmath>


std::string trim(const std::string& str) {
    std::string trimmed = str;
    trimmed.erase(trimmed.begin(), std::find_if(trimmed.begin(), trimmed.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
    trimmed.erase(std::find_if(trimmed.rbegin(), trimmed.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), trimmed.end());
    return trimmed;
}

struct DataEntry {
    std::string date;
    float value;
};

std::vector<DataEntry> get_values(char* argv) {
    std::vector<DataEntry> data;

    std::ifstream inputFile(argv);
    if (!inputFile) {
        std::cout << "Failed to open input file." << std::endl;
        return data;
    }

    std::string line;
    bool isFirstLine = true;
    while (std::getline(inputFile, line)) {
        if (isFirstLine) {
            isFirstLine = false;
            continue;
        }

        std::istringstream lineStream(line);
        std::string date, valueStr;
        float value = 0.0;

        if (std::getline(lineStream, date, '|')) {
            date = trim(date);

            if (std::getline(lineStream, valueStr, '|')) {
                valueStr = trim(valueStr);
                std::istringstream valueStream(valueStr);
                valueStream >> value;
            }

            DataEntry entry;
            entry.date = date;
            entry.value = value;
            data.push_back(entry);
        } else {
            std::cout << "Invalid input line: " << line << std::endl;
        }
    }

    return data;
}


double findValueByDate(const std::string& date_string) {
    std::ifstream file("data.csv");
    std::string line;
    std::string value;
    double result = 0.0;

    if (file.is_open()) {
        std::string previousDate;
        double previousValue = 0.0;

        while (getline(file, line)) {
            std::istringstream iss(line);
            std::string date;
            getline(iss, date, ',');
            if (date == date_string) {
                getline(iss, value);
                result = atof(value.c_str());
                file.close();
                return result;
            } else if (date < date_string) {
                previousDate = date;
                getline(iss, value);
                previousValue = atof(value.c_str());
            }
        }

        if (!previousDate.empty()) {
            result = previousValue;
        }

        file.close();
    }
    return result;
}

bool isValidDate(const std::string& date) {
    std::istringstream dateStream(date);
    std::tm parsedDate = {};
    dateStream >> std::get_time(&parsedDate, "%Y-%m-%d");
    return !dateStream.fail();
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./program input_file" << std::endl;
        return 1;
    }

    std::vector<DataEntry> data = get_values(argv[1]);

    for (size_t i = 0; i < data.size(); ++i) {
        const DataEntry& entry = data[i];
        std::string date_string = entry.date;
        if (entry.value < 0)
            std::cout << "Error: not a positive number.\n";
        else if (entry.value > 1000)
            std::cout << "Error: too large a number.\n";
        else if (!isValidDate(entry.date))
            std::cout << "Error: bad input => " << entry.date << std::endl;
        else
        {
            double result = findValueByDate(date_string);
            std::cout << entry.date << " => " << entry.value << " = " << (entry.value * result);
            std::cout << std::endl;
        }
    }

    return 0;
}
