/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:57:58 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 15:04:30 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon{

	private:
		std::string type_;
	
	public:
		//do i need constructor and destructor
		getType(); //retruns a constant reference to type
		void setType(); //sets ttype using the value passed as parameter
};