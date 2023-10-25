/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:53:36 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/22 12:58:44 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_
#include "Form.hpp"

class Form;

class ShrubberyCreationForm: public Form {
 public:
  virtual ~ShrubberyCreationForm();
  virtual void	executeConcrete() const;
  ShrubberyCreationForm(const std::string& target);
  ShrubberyCreationForm(const ShrubberyCreationForm & obj);
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

 private:
  ShrubberyCreationForm();
};

#endif  // SHRUBBERYCREATIONFORM_HPP_
