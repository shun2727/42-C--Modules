/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:03:48 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 17:38:39 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact{

	public :
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string phone_number_;
		std::string darkest_secret_;
	
	//default constrctor
	Contact()
	{
		first_name_ = "";
		last_name_ = "";
		nickname_ = "";
		phone_number_ = "";
		darkest_secret_ = "";
	}

	//parameterized constructor 
	Contact(std::string firstNameI, std::string lastNameI, std::string nicknameI, int phoneNumberI, std::string darkestSecretI)
	{
		first_name_ = firstNameI;
		last_name_ = lastNameI;
		nickname_ = nicknameI;
		phone_number_ = phoneNumberI;
		darkest_secret_ = darkestSecretI;
	}
};

#endif