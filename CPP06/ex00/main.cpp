/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:37:47 by pgorner           #+#    #+#             */
/*   Updated: 2023/10/09 16:27:08 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cctype>

bool isInteger(const std::string& s) {
    char* end;
    std::strtol(s.c_str(), &end, 10);
    return (*end == '\0');
}

bool isFloat(const std::string& s) {
    char* end;
    std::strtof(s.c_str(), &end);
    if (*end == '\0' || *end == 'f' || *end == 'F') {
        return true;
    }
    return false;
}

bool isDouble(const std::string& s) {
    char* end;
    std::strtod(s.c_str(), &end);
    return (*end == '\0');
}

bool isInfinity(const std::string& s) {
    return (s == "-inf" || s == "+inf");
}

bool isNaN(const std::string& s) {
    return (s == "nan");
}

bool isSingleChar(const std::string& s) {
    return (s.length() == 1);
}

void fromChar(std::string input)
{
    char character = input[0];
    int asInt = static_cast<int>(character);
    float asFloat = static_cast<float>(character);
    double asDouble = static_cast<double>(character);

    std::cout << "Char: " << character << std::endl;
    std::cout << "Int: " << asInt << std::endl;
    std::cout << "Float: " << asFloat << std::endl;
    std::cout << "Double: " << asDouble << std::endl;
}

void fromInt(std::string input)
{
    std::istringstream iss(input);
    int asInt;
    char asChar;
    float asFloat;
    double asDouble;

    if (asInt >= 0 && asInt <= std::numeric_limits<char>::max()) {
        asChar = static_cast<char>(asInt);
        if (std::isprint(asChar)) {
            std::cout << "Char: " << asChar << std::endl;
        } else {
            std::cout << "Non displayable" << std::endl;
        }
    } else {
        std::cout << "Impossible to convert to char" << std::endl;
    }

    // Convert to float and double
    asFloat = static_cast<float>(asInt);
    asDouble = static_cast<double>(asInt);

    std::cout << "Int: " << asInt << std::endl;
    std::cout << "Float: " << asFloat << std::endl;
    std::cout << "Double: " << asDouble << std::endl;
}

void fromFloat(std::string input)
{
    std::istringstream iss(input);
    float asFloat;
    char asChar;
    int asInt;
    double asDouble;

    // Convert to int
    asInt = static_cast<int>(asFloat);
    if (static_cast<float>(asInt) != asFloat) {
        std::cout << "Impossible to convert to int" << std::endl;
        return;
    }

    // Convert to char
    if (asInt >= 0 && asInt <= std::numeric_limits<char>::max()) {
        asChar = static_cast<char>(asInt);
        if (std::isprint(asChar)) {
            std::cout << "Char: " << asChar << std::endl;
        } else {
            std::cout << "Non displayable" << std::endl;
        }
    } else {
        std::cout << "Impossible to convert to char" << std::endl;
    }

    // Convert to float and double
    asDouble = static_cast<double>(asFloat);

    std::cout << "Int: " << asInt << std::endl;
    std::cout << "Float: " << std::fixed << std::setprecision(2) << asFloat << std::endl;
    std::cout << "Double: " << std::fixed << std::setprecision(2) << asDouble << std::endl;
}

void fromDouble(std::string input)
{
        std::istringstream iss(input);
    double asDouble;
    char asChar;
    int asInt;
    float asFloat;

    // Convert to int
    asInt = static_cast<int>(asDouble);
    if (static_cast<double>(asInt) != asDouble) {
        std::cout << "Impossible to convert to int" << std::endl;
        return;
    }

    // Convert to char
    if (asInt >= 0 && asInt <= std::numeric_limits<char>::max()) {
        asChar = static_cast<char>(asInt);
        if (std::isprint(asChar)) {
            std::cout << "Char: " << asChar << std::endl;
        } else {
            std::cout << "Non displayable" << std::endl;
        }
    } else {
        std::cout << "Impossible to convert to char" << std::endl;
    }

    // Convert to float
    asFloat = static_cast<float>(asDouble);

    std::cout << "Int: " << asInt << std::endl;
    std::cout << "Float: " << std::fixed << std::setprecision(2) << asFloat << std::endl;
    std::cout << "Double: " << std::fixed << std::setprecision(2) << asDouble << std::endl;
}

int main(int argc, char **argv)
{
    std::string input = argv[1];

    if (isSingleChar(input))
        fromChar(input);
    else if (isInteger(input))
        fromInt(input);
    else if (isFloat(input))
        fromFloat(input);
    else if (isDouble(input))
        fromDouble(input);
    else
        std::cout << "Unknown literal type.\n";
    // else if (isInfinity(input))
    //     fromInfinity(input);
    // else if (isNaN(input))
    //     fromNan(input);
    return 0;
}
