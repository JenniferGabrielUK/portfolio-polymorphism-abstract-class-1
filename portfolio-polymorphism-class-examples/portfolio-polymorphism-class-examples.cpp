// portfolio-polymorphism-class-examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

int main()
{
	// Account jenny; can't create as Account is abstract
	Checking_Account c;
	std::cout << c << std::endl;
	Savings_Account s{ "Jenny", 2400, 1.6 };
	std::cout << s << std::endl;
	s.deposit(3333);
	std::cout << s << std::endl;
	s.withdraw(3000);
	std::cout << s << std::endl;
	Account* ptr = new Trust_Account{ "Jennifer", 1001 };
	std::cout << *ptr << std::endl;
}

