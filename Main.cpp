#include <iostream>
#include <fstream>
using namespace std;

#include "Vehicle.h"
#include "Equipment.h"
#include "Train.h"
#include "PassengerTrain.h"


int main(){
    ifstream input;

    input.open("comp20080-autumn2022-Asst6-data.txt");

    double data[11];

    for(int i=0; i<11; i++){
        input >> data[i];
    }

    Train t1(data[0], data[1]);
    PassengerTrain pt1(data[2], data[4], data[3]), pt2(data[5], data[7], data[6]);
    cout << "Details of the objects immediately after being declared: " << endl << endl << endl;
    t1.print_details();
    pt1.print_details();
    print_PT_details(pt1);
    pt2.print_details();
    print_PT_details(pt2);

    t1.register_vehicle();
    pt1.register_vehicle();
    pt2.register_vehicle();
    t1.set_num_cars(data[8]);
    pt1.set_num_cars(data[9]);
    pt2.set_num_cars(data[10]);
    pt1.cap_calc();
    pt2.cap_calc();
    t1.depreciateEquipment();
    pt1.depreciateEquipment();
    pt2.depreciateEquipment();

    cout << "Details of the objects after being registered, railway cars reset, and depreciated: "  << endl << endl << endl;
    t1.print_details();
    pt1.print_details();
    pt2.print_details();

    int temp = pt1-pt2;

    ofstream output;
    output.open("comp20080-autumn2022-Asst6-output.txt");
    output << temp << endl;
    output.close();
}
