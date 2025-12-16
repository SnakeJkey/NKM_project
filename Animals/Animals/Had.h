//Had.h
#pragma once
#include "Animals.h"
#include <string>
#include <cstddef>  

class Had :
    public Animals
{
public:

    Had(const std::string& name,
        int age,
        int weight,
        bool isPoisunous,
        size_t lifeNumber);

    ~Had() override;

    const std::string& getName() const;
    void speak() const override;
    bool isPoisunous() const;
    size_t getLifeNumber() const;


protected:
    size_t getLifeNumber() const;


private:
    size_t mLifeNumber;
    bool mIsPoisonous;
};

