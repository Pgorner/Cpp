/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:09:16 by pgorner           #+#    #+#             */
/*   Updated: 2023/06/25 18:52:22 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_
#define HIGH 150
#define LOW 1

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat {
 public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat & obj);
    Bureaucrat& operator=(const Bureaucrat& obj);


    int	getGrade( void ) const;
    std::string	getName( void ) const;
    void	checkGrade( void ) const;
    void upgrade (int num);
    void downgrade (int num);

class GradeTooHighException : public std::exception {
 public:
  virtual const char* what() const throw() {
    return "person is tooo smart";
  }
};

class GradeTooLowException : public std::exception {
 public:
  virtual const char* what() const throw() {
    return "person has iq of gummybear";
  }
};

 private:
    const std::string _name;
    int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif  // BUREAUCRAT_HPP_
