// Practice6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <string> 
#include <fstream> 

using namespace std; 

int main() {
    string s; 
    ifstream file("some_text.txt"); 

    while (getline(file, s)) { 
        s += "\n"; 
        cout << s << endl;
    }

    file.close();

    return 0;
}
