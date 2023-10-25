/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:29:08 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 13:32:56 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form() {
  std::cout << "A shuffled paper has emerged\n";
}

Form::Form(int grade, int exgrade) : _name(""), _signed(false), _grade(grade), _exgrade(exgrade) {
  std::cout << "A shuffled paper has emerged: " << _name << std::endl;
}

Form::Form(std::string name, int grade, int exgrade) : _name(name), _signed(false), _grade(grade), _exgrade(exgrade) {
  std::cout << "A shuffled paper has emerged: " << _name << std::endl;
}

Form::Form(std::string name, std::string target, int grade, int exgrade) : _name(name), _target(target), _signed(false), _grade(grade), _exgrade(exgrade) {
  std::cout << "A shuffled paper has emerged: " << _name << std::endl;
}

Form::~Form() {
  std::cout << "The paper shuffled away\n";
}


Form::Form(const Form& obj) : _name(obj._name), _grade(obj._grade), _exgrade(obj._exgrade){
  std::cout << "Form has been copied" << std::endl;
  *this = obj;
}

Form& Form::operator=(const Form& obj) {
  (void)obj;
  return *this;
}

std::string	Form::getName( void ) const{
	return this->_name;
}

int Form::get_ex(void) const{
  return this->_exgrade;
}

int Form::beSigned(const Bureaucrat& bureaucrat) {
    if (_signed == true)
      throw(Form::FormSignedException());
    if (bureaucrat.getGrade() < get_ex())
      {
        setSigned(true); // Set the form as signed
        std::cout << bureaucrat.getName() << " signed " << getName() << std::endl;
        return(1);
      }
    else
    {
      throw(Bureaucrat::GradeTooLowException());
      return 0;
    }
}

void Form::setSigned(bool signedStatus)
{
    _signed = signedStatus;
}

