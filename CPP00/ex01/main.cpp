/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syee <syee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:53:42 by syee              #+#    #+#             */
/*   Updated: 2026/10/20 17:36:58 by syee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //cout , cin
#include <string> //to_string(), substr()
#include <cctype> //isdigit()
#include <iomanip> //setw(), setfill()
#include <cstdio>//prinf for debugging
#include "Contact.hpp"
#include "PhoneBook.hpp"

enum Field{
	first_name_,
	last_name_,
	nickname_,
	phone_number_,
	darkest_secret_
};

bool checkValid(std::string input, Field inputFeild)
{
	if (inputFeild == first_name_ || inputFeild == last_name_)
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
	else if (inputFeild == phone_number_)
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
void printFormat(std::string index, std::string first_name_, std::string last_name_, std::string nickname_)
{
	//get the string, truncate to 10 char, if more >10
	//string has built in funciton
	if (first_name_.length() > 10)
	{
		//substr is a member function of std:string so can only be used on that object
		first_name_ = first_name_.substr(0, 9);
		first_name_ += '.';
	}
	if (last_name_.length() > 10)
	{
		last_name_ = last_name_.substr(0, 9);
		last_name_ += '.';
	}
	if (nickname_.length() > 10)
	{
		nickname_ = nickname_.substr(0, 9);
		nickname_ += '.';
	}
	//setw() sees the value and determine how much it need to pad
	std::cout << "|" << std::right << std::setw(10) << index << "|";
	std::cout << std::right << std::setw(10) << first_name_ << "|";
	std::cout << std::right << std::setw(10) << last_name_ << "|";
	std::cout << std::right << std::setw(10) << nickname_ << "|" << "\n";
}

void displayMenu(void)
{
	std::cout << "\n";
	std::cout << "Enter the folloing commands : \n";
	std::cout << "--> ADD : save a new contact\n";
	std::cout << "--> SEARCH : display a specific contact\n";
	std::cout << "--> EXIT : quit the program\n";
	std::cout << ">";
}

//parameters are passed by reference
void menuAdd(Contact &newContact, PhoneBook &newPhonebook, int &phonebookIndex)
{
	std::cout << "\nAdding user...\n";
	//gets user input
	std::cout << "First name: ";
	std::cin >> newContact.first_name_;
	if (!checkValid(newContact.first_name_, first_name_))
		return;
	std::cout << "Last name: ";
	std::cin >> newContact.last_name_;
	if (!checkValid(newContact.last_name_, last_name_))
		return;
	std::cout << "Darkest secret: ";
	std::cin >> newContact.darkest_secret_;
	std::cout << "nickname_: ";
	std::cin >> newContact.nickname_;
	std::cout << "Phone number: ";
	std::cin >> newContact.phone_number_;
	if (!checkValid(newContact.phone_number_, phone_number_))
		return;

	phonebookIndex = phonebookIndex % 8;
	
	if (newPhonebook.size < 8)
		newPhonebook.size++;
	
	newPhonebook.arr[phonebookIndex++] = newContact;
	std::cout << "\nSuccesfully added user " << newContact.first_name_ << "! Current phonebook size is " << newPhonebook.size << "\n";
}

void menuSearch(PhoneBook &newPhonebook)
{
	std::string userInput;
	std::string indexStr;
	int			index;

	std::cout << "\nSearching...\n\n";
	
	printFormat("INDEX", "FIRST NAME", "LAST NAME", "nickname_");

	for (int i = 0; i <= (newPhonebook.size - 1) ; i++)
	{
		indexStr = i + '0';
		printFormat(indexStr, newPhonebook.arr[i].first_name_ , newPhonebook.arr[i].last_name_, newPhonebook.arr[i].nickname_);
	}
	
	if (newPhonebook.size == 0)
	{
		std::cout << "\n" << std::setw(10) << " " << "There are currently 0 contacts\n";
		return;
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
		std::cout << "First Name :" << newPhonebook.arr[index].first_name_ << "\n";
		std::cout << "Last Name :" << newPhonebook.arr[index].last_name_ << "\n";
		std::cout << "nickname_ :" << newPhonebook.arr[index].nickname_ << "\n";
		std::cout << "Phone Number :" << newPhonebook.arr[index].phone_number_ << "\n";
		std::cout << "Darkest Secret :" << newPhonebook.arr[index].darkest_secret_ << "\n";
	}
}

int main(void)
{
	Contact		newContact;
	PhoneBook	newPhonebook;
	bool		isExit = false;
	int			phonebookIndex = 0;
	std::string userInput;

	while (!isExit)
	{
		displayMenu();
		
		std::cin >> userInput;
		for (int i = 0; userInput[i]; i++)
			userInput[i] = (char)toupper(userInput[i]);
	
		if (userInput == "ADD")
			menuAdd(newContact, newPhonebook, phonebookIndex);
		else if (userInput == "SEARCH")
			menuSearch(newPhonebook);
		else if (userInput == "EXIT")
		{
			std::cout << "EXITING...\n";
			isExit = true;
		}
		else
			std::cout << "Error : please try again \n";
	}
}