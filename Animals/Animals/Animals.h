#pragma once
#include <string>
using namespace std;
class Animals
{
public:
	Animals(const string& name, int age, int weight);
	virtual ~Animals();
	const string& getName() const;
	int getAge() const;
	virtual const string& speak() const;
protected:
	string mName;
	int mAge;
	int mWeight;
};

void speak() const;
