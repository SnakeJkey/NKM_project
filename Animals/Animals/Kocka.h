#pragma once
#include "Animals.h"
class Kocka :
    public Animals
{

public:

    Kocka(const std::string& name, int age, int weight);


      void speak() const override;

};

