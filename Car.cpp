#include "Car.h"

#include <iostream>

Car::Car(const std::string& n) : Vehicle(n) {}

Car::~Car() = default;
Car::Car(const Car&) = default;
Car& Car::operator=(const Car&) = default;

void Car::closeWindows()
{
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void Car::tryToEvade()
{
    setSpeed(90);
    std::cout << name << ": kiss my shining metal bumper :-*" << std::endl;
}
