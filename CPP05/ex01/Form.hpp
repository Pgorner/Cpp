/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:29:08 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 13:29:50 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <string>
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <fstream>
#include "Bureaucrat.hpp" // Include the header for Bureaucrat
class Bureaucrat; // Forward declaration

class Form
{
public:
    // Constructors and Destructor
    Form();
    Form(const Form& obj);
    Form(int grade, int exgrade);
    Form(std::string name, int grade, int exgrade);
    Form(std::string name, std::string target, int grade, int exgrade);
    ~Form();

    // Assignment operator
    Form& operator=(const Form& obj);

    // Member functions
    std::string getName() const;
    int beSigned(const Bureaucrat& bureaucrat);
    int get_ex() const;
    void setSigned(bool signedStatus);
    
    // Exceptions for grade too high and grade too low
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "Grade is too high (person is too smart)";
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "Grade is too low (person has the IQ of a gummy bear)";
        }
    };

    class FormUnsignedException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "Form is unsigned";
        }
    };

    class FormSignedException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "Form is already signed";
        }
    };

    std::string _target;
private:
    const std::string _name;
    bool _signed;
    int _grade;
    int _exgrade;
};

#endif // FORM_HPP_
