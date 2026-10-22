/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:51:43 by syee              #+#    #+#             */
/*   Updated: 2026/10/22 22:48:24 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
	A member function attack() that displays (without the angle brackets):
		<name> attacks with their <weapon type>
*/
void HumanA::attack()
{
	std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}

/*
	HumanA takes the Weapon in its constructor, because it has to be always armed
	
	my weapon in the class takes the original copy, it has to be a reference of the weapon or else you would be storing the reference of a local variable
*/
HumanA::HumanA(std::string name, Weapon &weapon): name_(name), weapon_(weapon)
{

}


