#include <iostream>
#include <fstream>
#include <string>

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Failed to open the input file: " << filename << std::endl;
        return;
    }
    
    if (inputFile.peek() == std::ifstream::traits_type::eof()) {
        std::cerr << "Input file is empty." << std::endl;
        inputFile.close();
        return;
    }
    
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Failed to create the output file." << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    bool replacementPerformed = false;
    while (std::getline(inputFile, line)) {
        std::string modifiedLine;
        size_t pos = 0;
        while (pos < line.length()) {
            size_t foundPos = line.find(s1, pos);
            if (foundPos == std::string::npos) {
                modifiedLine += line.substr(pos);
                break;
            }
            modifiedLine += line.substr(pos, foundPos - pos);
            modifiedLine += s2;
            pos = foundPos + s1.length();
            replacementPerformed = true;
        }
        outputFile << modifiedLine << std::endl;
    }

    inputFile.close();
    outputFile.close();

    if (!replacementPerformed) {
        std::cerr << "No strings to replace." << std::endl;
        remove((filename + ".replace").c_str());
    } else {
        std::cout << "Replacement completed successfully." << std::endl;
    }
}

bool fileExists(const std::string& filename) {
    std::ifstream file(filename.c_str());
    return file.good();
}

int main() {
    std::string filename, s1, s2;
    
    do {
        std::cout << "Enter the filename: ";
        std::cin >> filename;
        if (!fileExists(filename)) {
            std::cerr << "File not found. Please enter a valid filename." << std::endl;
        }
    } while (!fileExists(filename));

    std::cout << "Enter the string to replace: ";
    std::cin >> s1;
    std::cout << "Enter the replacement string: ";
    std::cin >> s2;

    replaceStringInFile(filename, s1, s2);

    return 0;
}