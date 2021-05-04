#pragma once

#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& s);
    
    ~SemiTruck();
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
    
    void blowHorn();
    void pullOver();
};
