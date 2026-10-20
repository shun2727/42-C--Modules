/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:06:13 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 15:06:13 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOIS
*/
/*
to do :
- receive arguments 
- convert to upper case
- print 
*/

#include <iostream>
#include <cctype>

int main(int argc , char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		argv++;
		while (*argv != NULL)
		{
			for (int i = 0 ; (*argv)[i]; i++)
				std::cout << (char)toupper((*argv)[i]);
			std::cout << " ";
			argv++;
		}
		std::cout << "\n";
	}
	return (0);
}