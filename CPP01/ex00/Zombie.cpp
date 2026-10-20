/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 17:38:35 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 09:48:02 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Multiple constructors here,its called constructor overloading 
*/

Zombie :: Zombie() //constructor 1 
{

}

//overloaded constructor(meaning two constrcutor with the same name does diff things)
// this is called member initizlization and it only belongs to constructors
Zombie :: Zombie (std :: string name) : zombieName_(name) //parameterized constructo
{
	
}

/*
	When execution leaves the scope of main(), the object is destroyed automatically by the destructor
*/
Zombie :: ~Zombie() //deconstructor, denoted by ~ (tilde)
{
	std::cout << zombieName_ << " is being destroyed...\n";
}

void Zombie :: announce(void)
{
	std::cout << zombieName_ << " : BraiiiiiiinnnzzzZ...\n" ;
}

