#pragma once
#include "Animals.h"
class Kocka :
    public Animals
{

public:

    Kocka(const std::string& name, int age, int weight);


       const string& speak() const override;

};

