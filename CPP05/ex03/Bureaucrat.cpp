/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:09:16 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 13:17:10 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
  std::cout << "A papershuffling person has emerged\n";
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
  checkGrade();
  std::cout << "A papershuffling person has emerged\n";
}

Bureaucrat::~Bureaucrat() {
  std::cout << "The person has drowned in their papers\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
  *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
  std::cout << "Name will always stay the same as is const\n";
  if (this != &obj) {
    this->_grade = obj._grade;
  }
  return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
  os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
  return os;
}

void	Bureaucrat::checkGrade( void ) const
{
	if (this->_grade < LOW){
    std::cout << "Grade would be too good. Not possible\n";
		throw Bureaucrat::GradeTooHighException();
  }
	else if (this->_grade > HIGH){
    std::cout << "Grade would be too bad. Not possible\n";
		throw Bureaucrat::GradeTooLowException();
  }
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

std::string	Bureaucrat::getName( void ) const
{
	return this->_name;
}

void Bureaucrat::upgrade(int num){
    _grade -= num;
    checkGrade();
}

void Bureaucrat::downgrade(int num){
    _grade += num;
    checkGrade();
}

void Bureaucrat::signForm(Form& form) const {
    if (!form.beSigned(*this))
        throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::executeForm(const Form& form) const {
	try {
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout	<< _name << " cannot execute " << form.getName() << " because "
					<< e.what() << std::endl;
	}
}