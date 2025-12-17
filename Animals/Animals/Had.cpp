//Had.cpp

#include "Had.h"
#include <iostream>
#include <string>


Had::Had(const std::string& name,
	int age,
	int weight,
	bool isPoisonous,
	size_t lifeNumber)
	: Animals(name, age, weight)
{
	mLifeNumber = lifeNumber;
	mIsPoisonous = isPoisonous;
	std::cout << "Had byl vytvoren: " << name << std::endl;
}

Had::~Had() = default;

const string& Had::getName() const
{
	return mName;
}

 void Had::speak() const
{
	std::cout << getName() << "SSSSSSSSSS" << std::endl;
}

bool Had::isPoisunous() const
{
	return mIsPoisonous;
}

size_t Had::getLifeNumber() const
{
	return mLifeNumber;
}
