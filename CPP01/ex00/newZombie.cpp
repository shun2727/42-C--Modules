/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 16:42:38 by syee              #+#    #+#             */
/*   Updated: 2026/10/11 17:21:39 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief creates a zombie, names it so it can be used outisde th eufnciotn scope
 * 
 * @param name 
 * @return Zombie* 
 */
Zombie* newZombie(std::string name)
{
	Zombie *varZombie = new Zombie(name);
	
	return (varZombie);
}
