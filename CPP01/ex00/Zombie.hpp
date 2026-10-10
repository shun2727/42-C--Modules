#include <iostream>

/*
- implement a class
- implement class functions 
*/


//using new to create objects and useing delte to free

class Zombie{
	
	std::string name;
	
	void announce(void)
	{
		std::cout << name << ": : BraiiiiiiinnnzzzZ...";
	}

	public :
		Zombie() //default constrcutor
		{
			
		}

		Zombie* newZombie(std::string name) //creates a zombie, names it so it can be used outisde th eufnciotn scope
		{
			new ;
		}

		~Zombie() //destructor
		{

		}

		
};


Zombie *zombieHorde(int N, std::string name);