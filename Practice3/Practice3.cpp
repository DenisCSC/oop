// Practice3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Student.h"

int main()
{
    Student vasya;
    vasya.setDegree("Master");
    vasya.setName("Vasya");
    vasya.setAveragescore(5.0);
    
    std::cout << "Student's name is " << vasya.getName() << std::endl;
    std::cout << "Student's degree is " << vasya.getDegree() << std::endl;
    std::cout << "Stundent's average score is " << vasya.getAveragescore() << std::endl;
}


