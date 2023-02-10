#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "Equipment.h"

Equipment::Equipment(float v)
{
    value = v;
}

float Equipment::getValue()
{
    return value;
}

void Equipment::setValue(float v)
{
    value = v;
}

void Equipment::depreciateEquipment()
{
    value = 0.9*value;
}

void Equipment::print_value()
{
    cout << "The value of this train is: " << fixed << setprecision(2) << value << endl;
}
