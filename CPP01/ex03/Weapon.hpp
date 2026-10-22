/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:57:58 by syee              #+#    #+#             */
/*   Updated: 2026/10/22 15:52:07 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{

	private:
		std::string type_;
	
	public:
		Weapon(std::string type);
		const std::string& getType();
		void setType(std::string new_type); 
};

#endif