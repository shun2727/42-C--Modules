/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:21:06 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 14:48:49 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str_brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &str_brain; //pointer to the string
	std::string &stringREF = str_brain; //reference to the string
	
	std::cout << "memory address of str_brain : " << stringPTR << std::endl;
	std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF : " << &stringREF << std::endl; //not sure
	
	std::cout << "value of str_brain : " << str_brain << std::endl;
	std::cout << "value pointed by stringPTR :" << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF :" << stringREF << std::endl;
}