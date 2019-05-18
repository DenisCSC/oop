// Practice6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Vehicle {
public:
    double speed;
    Vehicle(double sp) {
        speed = sp;
    }
    virtual void move() {
        
    }
};

class Bicycle: public Vehicle {
public:
    Bicycle(double speed) : Vehicle(speed) {};
    void move() {
        cout << "Bicycle speed is: " << speed * 2 << endl;
    }
};

class Bus : public Vehicle {
public:
    Bus(double speed) : Vehicle(speed) {};
    void move() {
        cout << "Bus speed is: " << speed * 3 << endl;
    }
};



class Car : public Vehicle {
public:
    Car(double speed) : Vehicle(speed) {};
    void move() {
        cout << "Car speed is: " << speed * 4 << endl;
    }
};

int main()
{
    Bicycle* v1 =  &Bicycle(10);
    Car* v2 = &Car(80);
    Bus* v3 = &Bus(40);

    v1->move();
    v2->move();
    v3->move();







    std::cout << "Hello World!\n"; 
}

