// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include<iostream>
using namespace std;
#include"Vehicle.h"
#include"Engine.h"
#include"Car.h"
#include"Ship.h"
#include"Airplane.h"
#include"Stack.h"
#include"VehicleDepo.h"

int main(){
    Engine e1(1001, string("BMW"), 2.0f);
    Engine e2(2002, string("Yamaha"), 1.5f);
    Engine e3(3003, string("106iB2"), 3.5f);

    Car c1(1, "X5", "BMW", e1, 4);
    Ship s1(2, "Titanic", "White Star", e2, true);
    Airplane a1(3, "737", "106iB2", e3, 180);
    VehicleDepo depo;
    depo.addCar(c1);
    depo.addShip(s1);
    depo.addAirplane(a1);

    depo.ShowAllVehicles();
   
}

