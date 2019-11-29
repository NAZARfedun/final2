#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    
	cout << "**********Task2.1**********" << endl;


        const double Pi = 3.14;

        float y = acos(pow(Pi * exp(1), -1));

        cout << "y = acos(pow(Pi * exp(1), -1))" << endl;

        cout << "y = " << y << endl;

        float x = exp(-Pi) + pow(y, -exp(1)) + 0.15;

        cout << "x = exp(-Pi) + pow(y, -exp(1)) + 0.15" << endl;

        cout << "x = " << x << endl;

        float h = Pi * pow(sin((x - y) / 8 * Pi), 2);

        cout << "h = Pi * pow(sin((x - y) / 8 * Pi), 2)" << endl;

        cout << "h = " << h << endl;



    
    cout << "**********Task2.2**********" << endl;


        cout << "Find Radius from Sphere's Volume formula\n";

        cout << "Volume(V) = (4 * Pi * pow(R, 3)) / 3" << endl;
        cout << "Programmer decided that V = 4. So relax and smoke CBD a little bit ^~^\n";

        cout << "Radius(R) = pow((3 * V) / (4 * Pi), 1. / 3.)" << endl;
    
        int V = 4;
    	double R = pow((3 * V) / (4 * Pi), 1. / 3.);

        cout << "R = " << R << endl;
	
	system("pause");
	return 0;
}
