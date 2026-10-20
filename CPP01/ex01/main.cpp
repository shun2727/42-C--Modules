/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 06:35:00 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 11:20:31 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie_arr;
	std::string zombie_name;
	int zombie_amt;
	
	std::cout << "Enter zombie amount : ";
	std::cin >> zombie_amt;
	std::cout << "Enter zombie name : ";
	std::cin >> zombie_name;
	
	zombie_arr = zombieHorde(zombie_amt, zombie_name);

	delete[] zombie_arr;
	return (0);
}
