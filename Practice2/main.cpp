#include <iostream>
#include <math.h>

using namespace std;


double get_t(double a, double b, double y) {

    if (y == b) {
       
        return ((2 * y + sqrt((y*y - a)) / 2*b - sqrt((a*a-y))));
    }
    else if (y < b) {


        return sin(y) * sin(y) + 1 / (tan((a - b)));
    }
    else if (y > b) {


        return cbrt((y*sin(a))) + 1 / (sqrt((y*cos(b))));
    }
    
}


double get_y(double a, double b) {
    if (a <= b) {
        return ((a - b) / (a + b)) * (a + b) / (a*a - a * b + b * b);
    }
    else if (a > b) {
        return (a + log(b*b));
    }
}

void main() {
    double a, b, y, t;
    cin >> a;
    cin >> b;

    y = get_y(a, b);
    t = get_t(a, b, y);
    cout << "y = " << y << " t = " << t <<  endl;

    system("pause");
}
