#pragma once

#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& s);
    void blowHorn();
    void pullOver();
};
