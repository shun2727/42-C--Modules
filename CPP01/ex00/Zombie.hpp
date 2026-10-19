#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#endif

// : is called member initlaizer ist 
class Zombie{
	
	private : //doesnt really have to be written cus its private by default
		std::string zombieName_;
	
	public :	
		Zombie();//default constrcutor
		~Zombie(); //destructor
		Zombie (std ::string name);//overloaded funciton
		void announce(void);
		

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

