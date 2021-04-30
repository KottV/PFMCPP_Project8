#include "Car.h"

#include <iostream>

Car::Car(const std::string& n) : Vehicle(n) {}

void Car::closeWindows()
{
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void Car::tryToEvade()
{
    setSpeed(90);
    std::cout << name << ": kiss my shining metall bumper :-*" << std::endl;
}
