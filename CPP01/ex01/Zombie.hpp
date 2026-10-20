/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:37:50 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 09:49:39 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private :
		std :: string zombieName_;
	
	public :
		Zombie();
		~Zombie();
		void setZombie(std::string name);
		void announce(void);
};

Zombie *zombieHorde(int N, std::string name);


#endif

