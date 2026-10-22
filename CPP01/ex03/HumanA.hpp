/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:45:40 by syee              #+#    #+#             */
/*   Updated: 2026/10/22 15:59:48 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
	private: 
		std::string name_;
		Weapon weapon_;//humanA will always be armed

	public:
		HumanA();
		HumanA(std::string name_, Weapon weapon); 
		void attack();
};

#endif