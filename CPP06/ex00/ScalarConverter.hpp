/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:37:47 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/27 13:12:02 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ScalarConverter.h
#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <iostream>
#include <sstream>


class ScalarConverter {
public:
    ScalarConverter();
    ~ScalarConverter();
    void converter(const std::string& input);
    template <typename T>
    static bool tryParse(const std::string& str, T& result);
    void Char(const std::string& input);
    void Int(const std::string& input);
    void Double(const std::string& input);
    void Float(const std::string& input);
    
};

#endif // SCALARCONVERTER_H
