/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:53:47 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/21 19:04:22 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_
#include "Form.hpp"


class Form;

class RobotomyRequestForm: public Form {
 public:
  RobotomyRequestForm(const std::string& target);
  virtual ~RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm & obj);
  RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    
    private:
        RobotomyRequestForm();
		virtual void	executeConcrete() const;
};

#endif  // ROBOTOMYREQUESTFORM_HPP_
