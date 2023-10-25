/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:53:56 by pgorner           #+#    #+#             */
/*   Updated: 2023/09/26 12:58:37 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_
#include "Form.hpp"

class PresidentialPardonForm: public Form {
 public:
  virtual ~PresidentialPardonForm();
  PresidentialPardonForm(const std::string& target);
  PresidentialPardonForm(const PresidentialPardonForm & obj);
  PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
 private:
        PresidentialPardonForm();
		virtual void	executeConcrete() const;
};

#endif  // PRESIDENTIALPARDONFORM_HPP_
