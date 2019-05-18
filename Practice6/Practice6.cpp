// Practice6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Property {
public:
    double worth;
    Property(double price) {
        worth = price;
    }
    virtual void tax() {
        
    }
};

class Appartment: public Property {
public:
    Appartment(double worth) : Property(worth) {};
    void tax() {
        cout << "Price for Appartment is: " << worth / 1000.0 << endl;
    }
};

class Car : public Property {
public:
    Car(double worth) : Property(worth) {};
    void tax() {
        cout << "Price for Car is: " << worth / 200.0 << endl;
    }
};



class CountryHouse : public Property {
public:
    CountryHouse(double worth) : Property(worth) {};
    void tax() {
        cout << "Price for CountryHouse is: " << worth / 500.0 << endl;
    }
};

int main()
{
    Property* objs[7];
    Appartment* v1 =  &Appartment(300000);
    Appartment* v2 = &Appartment(1000000);
    Appartment* v3 = &Appartment(500000);

    Car* v4 = &Car(200000);
    Car* v5 = &Car(20000);

    CountryHouse* v6 = &CountryHouse(50000);
    CountryHouse* v7 = &CountryHouse(200000);




    objs[0] = v1;
    objs[1] = v2;
    objs[2] = v3;
    objs[3] = v4;
    objs[4] = v5;
    objs[5] = v6;
    objs[6] = v7;

    for (size_t i = 0; i < 6; i++) {
        objs[i]->tax();
    }


    std::cout << "Hello World!\n"; 
}

