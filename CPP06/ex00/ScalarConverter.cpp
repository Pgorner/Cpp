#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip> // Required for setting float/double precision

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

enum Type { CHAR, INT, FLOAT, DOUBLE, UNKNOWN };

bool isChar(const std::string& str) {
    return str.size() == 3 && str[0] == '\'' && str[2] == '\'';
}

bool isInteger(const std::string& str) {
    if (str.empty()) return false;
    size_t start = 0;
    if (str[0] == '+' || str[0] == '-') {
        if (str.size() == 1) return false;
        start = 1;
    }
    for (size_t i = start; i < str.size(); ++i) {
        if (!std::isdigit(str[i])) return false;
    }
    return true;
}

bool isFloat(const std::string& str) {
    if (str == "-inff" || str == "+inff" || str == "nanf") {
        return true;  // It's a float exception
    }
    if (str.empty()) return false;
    size_t start = 0;
    if (str[0] == '+' || str[0] == '-') {
        if (str.size() == 1) return false;
        start = 1;
    }
    bool hasDecimal = false;
    bool hasTrailingF = false; // Check for trailing 'f'
    for (size_t i = start; i < str.size(); ++i) {
        if (!std::isdigit(str[i])) {
            if (str[i] == '.' && !hasDecimal) {
                hasDecimal = true;
            } else if (str[i] == 'f' && i == str.size() - 1 && !hasTrailingF) {
                hasTrailingF = true;
            } else {
                return false;
            }
        }
    }
    return hasDecimal || hasTrailingF;
}

bool isDouble(const std::string& str) {
    if (str == "-inf" || str == "+inf" || str == "nan" || str == "-inff" || str == "+inff" || str == "nanf") {
        return true;  // It's a double exception
    }
    if (str.empty()) return false;
    size_t start = 0;
    if (str[0] == '+' || str[0] == '-') {
        if (str.size() == 1) return false;
        start = 1;
    }
    bool hasDecimal = false;
    for (size_t i = start; i < str.size(); ++i) {
        if (!std::isdigit(str[i])) {
            if (str[i] == '.' && !hasDecimal) {
                hasDecimal = true;
            } else {
                return false;
            }
        }
    }
    return hasDecimal;
}

Type getType(const std::string& str) {
    if (isChar(str)) return CHAR;
    if (isInteger(str)) return INT;
    if (isFloat(str)) return FLOAT;
    if (isDouble(str)) return DOUBLE;
    return UNKNOWN;
}

void ScalarConverter::Char(const std::string& input) {
    char c = input[0];
    if (static_cast<int>(c) < 32 || static_cast<int>(c) > 126)
        std::cout << "char: Non-displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void ScalarConverter::Int(const std::string& input) {
    int i = std::stoi(input);
    std::cout << "char: ";
    if (i >= 32 && i <= 126)
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "Non-displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void ScalarConverter::Double(const std::string& input) {
    double d = std::stod(input);
    std::cout << "char: ";
    if (d >= 32 && d <= 126)
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
    else
        std::cout << "Non-displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::Float(const std::string& input) {
    float f = std::stof(input);
    std::cout << "char: ";
    if (f >= 32 && f <= 126)
        std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
    else
        std::cout << "Non-displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void ScalarConverter::converter(const std::string& input) {
    Type t = getType(input);

    // Create a static array of function pointers.
    static void (ScalarConverter::*converting[4])(const std::string& input) = {
        &ScalarConverter::Char,
        &ScalarConverter::Int,
        &ScalarConverter::Float,
        &ScalarConverter::Double
    };

    if (t == UNKNOWN)
        std::cout << "Unknown" << std::endl;
    else
        (this->*converting[t])(input);
}
