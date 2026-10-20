/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 08:37:02 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 10:59:46 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie()
{

}

Zombie :: ~Zombie() 
{
	std::cout << zombieName_ << " is being destroyed...\n";
}

/*
	announces the zombie name
*/
void Zombie::announce()
{
	std::cout << zombieName_ << ": BraiiiiiiinnnzzzZ...\n";
}

/*
	paremeterized constrcutor will use announce if its called
*/
void Zombie::setZombie(std::string name)
{
	zombieName_ = name;
	Zombie::announce();
}

/*
	Allocate N Zombie objects in a single allocation. Then, it must initialize the
	zombies, giving each of them the name passed as a parameter. The function returns a
	pointer to the first zombie.
	Allocate zombies using new?
*/

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie_arr = new Zombie[N];
	
	for (int i = 0; i < N ; i++)
		zombie_arr[i].setZombie(name);
	
	return (zombie_arr);
}
