/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:02:13 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 16:14:23 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

	public :
		//Contact will automatically be initialized because contact has its own default constructor values 
		Contact arr[8]; 
		int size;

	//default constructor , using memeber initialization list
	PhoneBook() : size(0) {}
};

#endif