/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:53:47 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 12:58:43 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_
#include "Form.hpp"


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
