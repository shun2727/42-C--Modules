# What is namespace? 
- https://www.geeksforgeeks.org/cpp/namespace-in-c/

```c++
namespace x {
	funciton ()
	{

	}
}

//in main
using namespace x
int main ()
{
	function (); //uses the funciton from namspace x
	return (0);
}
```

- if there were multiple namespaces
```c++
#include <iostream>  
namespace Room1 {
    // Function greet inside namespace Room1
    void greet() {
        std::cout << "Hello from Room 1!" << std::endl;
    }
}

namespace Room2 {
    // Function greet inside namespace Room2
    void greet() {
        std::cout << "Hello from Room 2!" << std::endl;
    }
}

int main() {
    // Use the scope resolution operator (::) to access greet() function inside namespace Room1
    Room1::greet();  
    Room2::greet(); 
    
    return 0;  
}
```

# what is TPP?
- Template Implementation File used to separate the definition (implementation) of C++ templates from their declarations

# what are include guards?
- https://www.geeksforgeeks.org/cpp/include-guards-in-c/
- interpretatio : to prevent headers from being included multiple times 
- basically the #ifndef, #define, #endif statements

```c++
#ifndef ANIMAL(Any word you like but unique to program)
#define ANIMAL(same word as used earlier)

class Animal {
    // Code
};

#endif
```

# compilation
| Command        | Language                                                 | Links C++ Standard Library? |
| -------------- | -------------------------------------------------------- | --------------------------- |
| `cc file.c`    | C                                                        | No                        |
| `gcc file.c`   | C                                                        | No                        |
| `g++ file.cpp` | C++                                                      | Yes                       |
| `gcc file.cpp` | C++ source, but doesn't automatically link C++ libraries | Usually no                |
- all of these are under gnu compiler colleciton

# CPP00 related
## ex00
- https://www.w3schools.com/cpp/cpp_user_input.asp (cout)
- https://www.geeksforgeeks.org/cpp/toupper-in-cpp/ (toupper)
- https://www.geeksforgeeks.org/cpp/cpp-standards-and-implementations/ (cpp standards)
- types of for loop : 
	- count controller (traditional for (int i = 0 ..))
	- range based 
		- 
		```c++
		for (type variableName : arrayName) {
		// code block to be executed
		}
		```
		- This variant completely eliminates the index counter to prevent out-of-bounds syntax bugs. Instead of tracking an index, it automatically extracts each individual element from a data sequence—such as an array, list, or string—from start to finish

1. feeding arguments to the program uses the same c formatting 
2. [] binds thighter than * so if do *argv[], it will get the second argv then only deref to get the char

## ex01
- https://www.w3schools.com/cpp/cpp_classes.asp (classes)
	```c++
	class MyClass {       // The class
	public:             // Access specifier
		int myNum;        // Attribute (int variable)
		string myString;  // Attribute (string variable)
	};
	```
- https://cplusplus.com/reference/string/string/ (string)
- https://cplusplus.com/reference/iomanip/ ()
- https://www.w3schools.com/cpp/cpp_switch.asp (case statments) //did not use
- https://www.w3schools.com/cpp/cpp_constructors.asp (constructors)
	- they are called automatically when the class is called/ initialized
- https://www.geeksforgeeks.org/cpp/default-constructors-in-cpp/ (default constrcutors)
- https://en.cppreference.com/cpp/language/constructor (member initializaiton list)
	- usually for const it has to be done using initilizaiton list `struct() : x(5)`
- https://www.geeksforgeeks.org/cpp/types-of-constructors-in-cpp/(types of constructor 4 types)
	- when do you need parameterized constructor? When your object is created doe sit need a value?
- https://www.geeksforgeeks.org/cpp/isdigit-in-cpp/ (isdigit)
- using camelCase or PascalCase became a deliberate strategy for many developers and major frameworks to instantly separate their custom code from the C++ Standard Library.
	- camelCase
	- PascalCase
	- snake_case
- flushes the output buffer (endl)
- https://csundergrad.science.uoit.ca/courses/cpp-notes/notes/output-formatting.html (cpp formatting setw())

3. default constructor
	- if its a primitive value
	```c++
	class Example
	{
	public:
		int numbers[5];

		Example() : numbers{}
		{
		}
	};
	```
4. comparing string
	- https://www.digitalocean.com/community/tutorials/compare-strings-in-c-plus-plus
	- This is one of the advantages of std::string—it overloads comparison operators so you can compare strings naturally with ==, <, >, etc., without calling strcmp
	```c++

	```

5. member function : a funciton that belongs to a class. Aka method

6. copy constructor :
	- when doing `std::string = x` its essentially treating it as string(x);
	
7. Allowed to modify characters in cpp
	- in c :
	```c
	"Hello"[0] = 'Y'; //  not allowed
	```
	- in cpp :
	```c++
	std::string s = "Hello";
	s[0] = 'Y';
	```
8. Initializing object in funcitons
	- stack allocaiton (to use wihtin funciton)
	- heap allocation (to persist outside of fnciton)
