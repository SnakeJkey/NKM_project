#pragma once
#include "Animals.h"
class Kocka :
    public Animals
{

public:

    Kocka(const std::string&, int vek, int vaha)
        :Animals(name, age, weight)

        ~Kocka() override;

};

