/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 14:18:49 by syee              #+#    #+#             */
/*   Updated: 2026/10/11 17:41:15 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
/**
 * @brief Demonstrate different ways of creating an object
 * 
 * @param ac 
 * @param av 
 * @return int 
 */

int main(void)
{
	//method 1, using an external function to create the zombie (uses heap)
	Zombie *zombie1 = newZombie("Jumbo");
	zombie1->announce();
	
	//method 2, using an overloaded constructor to create the zombie (uses stack)
	Zombie zombie2("Timmy");
	zombie2.announce();
	
	//method 3, using an external function to create the zombie and aanounce itself (uses stack)
	randomChump("Bobby");
	
	//method 4, creating the zombie on the stack in main without any names
	Zombie zombie4;

	delete zombie1;
	
	return (0);
}