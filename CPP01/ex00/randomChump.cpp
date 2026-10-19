/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 16:44:52 by syee              #+#    #+#             */
/*   Updated: 2026/10/19 00:13:46 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief creates a zombie names it and makes it announce itself
 * 
 * @param name 
 */
void randomChump(std::string name)
{
	Zombie zombie1(name);
	zombie1.announce();
	
}