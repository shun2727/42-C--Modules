/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:00:40 by syee              #+#    #+#             */
/*   Updated: 2026/10/21 19:45:31 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

/*
	retruns a constant reference to type
*/
const std::string& Weapon::getType()
{
	return (type_);
}

/*
	sets type using the value passed as parameter
	member initilizaiton is not allowed here 
*/
void Weapon::setType(std::string new_type)
{
	type_ = new_type;
}