#include <iostream>
#include <fstream>

/*
Реализовать программу-калькулятор, работающий с различными
типами данных
 */


using namespace std;

float plus(int x, int y) {
    return float(x + y);
}

float plus(float x, float y) {
    return x + y;
}

float divide(int x, int y) {
    if (y == 0) {
        cout << "There was an error";
    }

    return float(x / y);
}

float divide(float x, float y) {
    if (y == 0) {
        cout << "There was an error";
    }
    return x / y;
}

float mul(int x, int y) {
    return float(x * y);
}

float mul(float x, float y) {
    return x * y;
}


void f1() {
    cout << "In sec";
}

int main() {
    int x = 5;
    int y = 10;

    float r1 = mul(x, y);
    float r2 = divide(y, x);

    float x1 = 17.5;
    float y1 = 3.5;

    float r3 = mul(x1, y1);

    cout << r1 << " " << r2 << " " << r3 << endl;
}