#include <iostream>
#include <string>
using namespace std;


void main() {
    string name;

    getline(cin, name);
    cout << "Hello," << name << endl;
    

    int a;
    int b;

    cin >> a >> b;
    
    cout << "a + b = " << a + b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a - b = " << a - b << endl;
    
    if (b == 0) {
        cout << "Error : b is zero" << endl;
    }

}