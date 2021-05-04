#include "Vehicle.h"

Vehicle::Vehicle(const std::string& n) : name(n) { }
    
Vehicle::~Vehicle() = default;
Vehicle::Vehicle(const Vehicle&) = default;
Vehicle& Vehicle::operator=(const Vehicle&) = default;
