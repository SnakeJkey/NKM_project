#include "Animals.h"
#include <iostream>
using namespace std;

Animals::Animals(const string& name, int age, int weight)
	: mName(name), mAge(age), mWeight(weight)
{
	cout << "Animal constructor called for " << mName << '\n';
}

Animals::~Animals() = default;

const string& Animals::getName() const
{
	return mName;
}

int Animals::getAge() const
{
	return mAge;
}

void Animals::speak() const
{
	cout << getName() << " vydava zvuk \n";
}