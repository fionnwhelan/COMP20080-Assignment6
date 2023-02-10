#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "Equipment.h"
#include "Train.h"


Train::Train(int train_id, float v) : Vehicle(train_id), Equipment(v)
{
    num_cars = 10;
}

void Train::depreciateEquipment()
{
    float temp = 0.925*getValue();
    setValue(temp);
}

void Train::set_num_cars(int in_num_cars)
{
    num_cars = in_num_cars;
}

int Train::ret_num_cars()
{
    return num_cars;
}

void Train::print_details()
{
    cout << "The ID of this train is: " << get_vehicle_id() << endl;
    cout << "The number of railway cars on this train is: " << ret_num_cars() << endl;
    if (get_v_registered())
    {
        cout << "This train has been registered." << endl;
    }
    else
    {
        cout << "This train has not been registered." << endl;
    }
    print_value();
    cout << endl;
}


