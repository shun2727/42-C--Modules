/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:45:39 by syee              #+#    #+#             */
/*   Updated: 2026/10/22 15:59:33 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB()
{
	name_="";
	
}
void HumanB::attack()
{
	std::cout << name_ << " attacks with their " << this->weapon_.getType();
}
