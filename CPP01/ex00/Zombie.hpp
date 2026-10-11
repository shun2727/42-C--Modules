#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#endif

class Zombie{
	
	std::string zombieName;
	
	public :
		//default constrcutor
		Zombie()
		{
			
		}
		
		//setter function?
		Zombie (std ::string name)
		{
			zombieName = name;
		}

		//member function
		void announce(void)
		{
			std::cout << zombieName << " : BraiiiiiiinnnzzzZ...\n" ;
		}

		~Zombie() //deconstructor, denoted by ~ (tilde)
		{
			std::cout << zombieName << " is being destroyed...\n";
		}

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

