#include <iostream>
#include "Kocka.h"

Kocka::Kocka(const std::string& name, int age, int weight) : Animals(name, age, weight)
{
	std::cout << "Kocka je stvorena: " << name << std::endl;
}


const string& Kocka::speak() const
{
	std::cout << getName() << "Meow" << std::endl;
}