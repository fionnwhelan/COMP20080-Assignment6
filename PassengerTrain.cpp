#include <iostream>
using namespace std;
#include "Vehicle.h"
#include "Equipment.h"
#include "Train.h"
#include "PassengerTrain.h"


PassengerTrain::PassengerTrain(int train_id, int in_pas_cap_per_car, float v) : Train(train_id, v) //"the re-written Passenger Train constructor has to take into account that a Passenger Train is both a Vehicle and a piece of Equipment;"
{
    pas_cap_per_car = in_pas_cap_per_car;
}


void PassengerTrain::cap_calc()
{
    pas_cap = pas_cap_per_car*ret_num_cars();
}

int PassengerTrain::operator-(PassengerTrain pt)
{
    int temp = pas_cap - pt.pas_cap;
    return temp;
}

void PassengerTrain::print_details()
{

    cout << "The ID of this train is: " << get_vehicle_id() << endl;
    cout << "The passenger capacity of the train is: " << pas_cap << endl;
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

void PassengerTrain::depreciateEquipment()
{
    float temp = 0.875*getValue();
    setValue(temp);
}

void print_PT_details(PassengerTrain pt)
{
    cout << "The following details are from the friend function." << endl;

    cout << "The ID of this train is: " << pt.get_vehicle_id() << endl;
    cout << "The passenger capacity of the train is: " << pt.pas_cap << endl;
    if (pt.get_v_registered())
        {
            cout << "This train has been registered." << endl;
        }
        else if(!pt.get_v_registered())
        {
            cout << "This train has not been registered." << endl;
        }
    pt.print_value();
    cout << endl;
}

