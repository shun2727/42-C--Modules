#include <iostream> //cout , cin
#include <string> //to_string(), substring()
#include <bits/stdc++.h> //isdigit()
#include <iomanip> //setw(), setfill()
#include <cstdio>//prinf for debugging

enum Feild{
	firstName,
	lastName,
	nickname,
	phoneNumber,
	darkestSecret
};

class Contact{

	public :
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	
	//default constrctor
	Contact()
	{
		firstName = "";
		lastName = "";
		nickname = "";
		phoneNumber = "";
		darkestSecret = "";
	}

	//parameterized constructor 
	Contact(std::string firstNameI, std::string lastNameI, std::string nicknameI, int phoneNumberI, std::string darkestSecretI)
	{
		firstName = firstNameI;
		lastName = lastNameI;
		nickname = nicknameI;
		phoneNumber = phoneNumberI;
		darkestSecret = darkestSecretI;
	}
};

class PhoneBook {

	public :
		//Contact will automatically be initialized
		Contact arr[8]; 
		int size;

	//default constructor , using memeber initialization list
	PhoneBook() : size(0)
	{
	}
};

void printErr()
{

}
bool checkValid(std::string input, Feild inputFeild)
{
	if (inputFeild == firstName || inputFeild == lastName)
	{
		for (size_t i = 0; i < input.length(); i++)
		{
			if (input[i] <= '9' && input[i] >= '0')
			{
				std::cout << "\n Invalid name value, please try again \n";
				return (false);
			}
		}
		return (true);
	}
	else if (inputFeild == phoneNumber)
	{
		for (int i = 0; input[i]; i++)
		{
			if (input[i] > '9' || input[i] < '0')
			{
				std::cout << "\nInvalid phone number, please try again \n";
				return (false);
			}
		}
	}
	//silence warning
	return (true);
}	
//might need to put const
void printFormat(std::string index, std::string firstName, std::string lastName, std::string nickname)
{
	//get the string, truncate to 10 char, if more >10
	//string has built in funciton
	if (firstName.length() > 10)
	{
		//substr is a member function of std:string so can only be used on that object
		firstName = firstName.substr(0, 9);
		firstName += '.';
	}
	if (lastName.length() > 10)
	{
		lastName = lastName.substr(0, 9);
		lastName += '.';
	}
	if (nickname.length() > 10)
	{
		nickname = nickname.substr(0, 9);
		nickname += '.';
	}
	//setw() sees the value and determine how much it need to pad
	std::cout << "|" << std::right << std::setw(10) << index << "|";
	std::cout << std::right << std::setw(10) << firstName << "|";
	std::cout << std::right << std::setw(10) << lastName << "|";
	std::cout << std::right << std::setw(10) << nickname << "|" << "\n";
}

int main (void)
{
	Contact		newContact;
	PhoneBook	newPhonebook;
	bool		isExit = false;
	int			index;
	int			phonebookIndex;
	std::string userInput;

	newPhonebook.size = 0;
	phonebookIndex = 0;

	while (!isExit)
	{
		std::cout << "\n";
		std::cout << "Enter the folloing commands : \n";
		std::cout << "--> ADD : save a new contact\n";
		std::cout << "--> SEARCH : display a specific contact\n";
		std::cout << "--> EXIT : quit the program\n";
		std::cout << ">";

		std::cin >> userInput;
		for (int i = 0; userInput[i]; i++)
			userInput[i] = (char)toupper(userInput[i]);
	
		if (userInput == "ADD")
		{
			std::cout << "\nAdding user...\n";
			//gets user input
			std::cout << "First name: ";
			std::cin >> newContact.firstName;
			if (!checkValid(newContact.firstName, firstName))
				continue;
			std::cout << "Last name: ";
			std::cin >> newContact.lastName;
			if (!checkValid(newContact.lastName, lastName))
				continue;
			std::cout << "Darkest secret: ";
			std::cin >> newContact.darkestSecret;
			std::cout << "Nickname: ";
			std::cin >> newContact.nickname;
			std::cout << "Phone number: ";
			std::cin >> newContact.phoneNumber;
			if (!checkValid(newContact.phoneNumber, phoneNumber))
				continue;
	
			phonebookIndex = phonebookIndex % 8;
			
			if (newPhonebook.size < 8)
				newPhonebook.size++;
			
			newPhonebook.arr[phonebookIndex++] = newContact;
			std::cout << "\nSuccesfully added user " << newContact.firstName << "! Current phonebook size is " << newPhonebook.size << "\n";
		}
		else if (userInput == "SEARCH")
		{
			std::cout << "\nSearching...\n\n";
			
			printFormat("INDEX", "FIRST NAME", "LAST NAME", "NICKNAME");
		
			for (int i = 0; i <= (newPhonebook.size - 1) ; i++)
				printFormat(std::to_string(i),newPhonebook.arr[i].firstName , newPhonebook.arr[i].lastName, newPhonebook.arr[i].nickname);
			
			if (newPhonebook.size == 0)
			{
				std::cout << "\n" << std::setw(10) << " " << "There are currently 0 contacts\n";
				continue;
			}
			else
			{
				std::cout << "Enter the index of contact you want to view :\n";
				std::cout << ">";
				std::cin >> userInput;
			}

			index = userInput[0] - '0';
			
			if (userInput.length() > 1 || !isdigit(userInput[0]) || index < 0 || index > newPhonebook.size - 1)
				std::cout << "\nInvalid index, try again\n";
			else
			{
				index = userInput[0] - '0';
				std::cout << "First Name :" << newPhonebook.arr[index].firstName << "\n";
				std::cout << "Last Name :" << newPhonebook.arr[index].lastName << "\n";
				std::cout << "Nickname :" << newPhonebook.arr[index].nickname << "\n";
				std::cout << "Phone Number :" << newPhonebook.arr[index].phoneNumber << "\n";
				std::cout << "Darkest Secret :" << newPhonebook.arr[index].darkestSecret << "\n";
			}

		}
		else if (userInput == "EXIT")
		{
			std::cout << "EXITING...\n";
			isExit = true;
		}
		else
		{
			std::cout << "Error : please try again \n";
		}
	}
}