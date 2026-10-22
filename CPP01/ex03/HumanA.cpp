/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:51:43 by syee              #+#    #+#             */
/*   Updated: 2026/10/22 16:00:42 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
	A member function attack() that displays (without the angle brackets):
		<name> attacks with their <weapon type>
*/
void HumanA::attack()
{
	std::cout << name_ << " attacks with their " << this->weapon_.getType();
}

/*
	HumanA will always be armed
*/
HumanA::HumanA()
{

}
/*
	HumanA takes the Weapon in its constructor
*/
HumanA::HumanA(std::string name, Weapon weapon): name_(name), weapon_(weapon)
{
	
}


