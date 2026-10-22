/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:45:39 by syee              #+#    #+#             */
/*   Updated: 2026/10/22 23:16:26 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB()
{
	
}
HumanB::HumanB(std::string name): name_(name)
{
	
}

void HumanB::attack()
{
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}
/*
	if an object is passed in then how do you assign it to the member variable
*/
void setWeapon(Weapon &weapon)
{
	weapon_ = weapon;
}