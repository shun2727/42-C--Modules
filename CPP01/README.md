1. what is the point of a default constrcutor
a constrcuto s used ot initialized values upon an object being created 
and that is helpful when its 

classnam(int value)
{
	x = vlaue; 
}

but for a default constructor youre not supposed to key in anythiing into the paremeters, so whats the point for this default constructor anyways

its actually the same as doing 

class x{

	int i;
	
	x()
	{
		i = 0;
	}
}

so essentially its initializing the values to the system default values

or if you want the variables to be a specific value

class x{

	int i;
	
	x()
	{
		i = 20;
	}
}

2. setting variables public or private what is the difference
if the varibales are private 

doing this in main 

classname c1;

c1.var = x; //will cause an error 

and requires a member funciton a setter i assue to manpulate or chnage it 

what is the usecase that having a private variable?

if a variable is meant to be read only and not to be manipulated, by making it public theres a chance that someone may do

c1.value = +9391834;

3. private by default
theres no specific need to do 

class x{

	private :
		int var; 
}

because anything that iis written in the class is private by default unlike struct

now that brings us to another question
"wait you can have member funcitons in structs? how? how do you even access them ?"



4. how does destructors work

it is calle dwhen an object goes out of scope

Do we need to call it manually ? 
No, you generally do not need to call destructors explicitly in C++. The C++ runtime environment automatically invokes destructors when an object's lifetime 


but in the case where there is a pointer or invovlds memory management, thats when destructors are needed


5. creating values by the heap 
	using new and delete instead of malloc and free

	e.g. for heap

	theClass *var = new theClass(bla); // call the constructor and new when initializing

	e.g. for stack 
	
	theClass var; 

6. deleting value on the heap 

	https://www.geeksforgeeks.org/cpp/delete-in-c/