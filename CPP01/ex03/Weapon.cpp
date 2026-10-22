/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:00:40 by syee              #+#    #+#             */
/*   Updated: 2026/10/22 22:58:24 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

/*
	retruns a constant reference to type (but im not sure why it has to be a constant reference)
*/
const std::string& Weapon::getType()
{
	return (type_);
}

/*
	sets type using the value passed as parameter
	(member initilizaiton is not allowed here )
*/
/*
	for some reason you cant just do _var and assign to i? it doesnt manipulate the original?
*/
void Weapon::setType(std::string new_type)
{
	type_ = new_type;
}

Weapon::Weapon(std::string type): type_(type)
{

}
Weapon::Weapon()
{
	type_ = "";
}