#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) 
{
	cout << "**********Task3.1**********" << endl;
	while(true)
	{
		float x;
		cout << "Enter x > 0 or x < 0 or x = 0: ";
		cin >> x;
		if(x > 0)
		{
			float y = sin(x) / x;
			cout << "y = sin(x) / x" << endl;
			cout << "y = " << y << endl;
		}
		else if(x < 0)
		{
			float y = 2 * pow(x, 2) + log(fabs(x));
			cout << "y = 2 * pow(x, 2) + log(fabs(x))" << endl;
			cout << "y = " << y << endl;
		}
		else if(x == 0)
		{
			float y;
			y = x;
			cout << "y = " << y << endl;
		}
		break;
	}
	
	cout << "\n**********Task3.2**********" << endl;
	int k = 11;
	cout << "It's your group number. k = " << k << endl;
	float l = 29;
	cout << "It's your variant number. l = " << l << endl;
	
	float x = (l + 2 * k) / 2.;
	cout << "x = (l + 2 * k) / 2." << endl; 
	cout << "x = " << x << endl;
	
	float y = (l + k) / l;
	cout << "y = (l + k) / l" << endl;
	cout << "y = " << y << endl;
	
	float z = 2 * l * k - 4;
	cout << "z = 2 * l * k - 4" << endl;
	cout << "z = " << z << endl;
	
	float p = max( 2 * x, y) + max(y, 2 * z);
	cout << "p = max( 2 * x, y) + max(y, 2 * z) " << endl;
	cout << "p = " << p << endl;
	
	cout << "\n**********Task3.3**********" << endl;
	
	float y1, x1; 
	cout << "Enrter x1 and y1. They must be <= 1: ";
	cin >> x1 >> y1;
	if(y1 = 1 - x1 && x1 <=1 && y1 <= 1)
	{
		cout << "Tochka nalezhyt'' sektory" << endl;;
	}
	else 
	{
		cout << "Tochka ne nalezhyt' sektory" << endl;
	}
		
	cout << "\n**********Task3.4**********"	<< endl;
	while(true)
	{
		int R;
		cout << "Enter R. It must be INT: ";
		cin >> R;
		cout << "R = " << R << endl;
		float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
		cout << "Enter x and y 5 times: ";
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
		if(sqrt(pow(x1, 2) + pow(y1, 2)) == R)
		{
			cout << "x and y are correct" << endl;
			cout << "x1 = " << x1 << " y1 = " << y1 << endl;
		}
		else if(sqrt(pow(x2, 2) + pow(y2, 2)) == R)
		{
			cout << "x and y are correct" << endl;
			cout << "x2 = " << x2 << " y2 = " << y2 << endl;
		}
			else if(sqrt(pow(x3, 2) + pow(y3, 2)) == R)
		{
			cout << "x and y are correct" << endl;
			cout << "x3 = " << x3 << " y3 = " << y3 << endl;
		}
			else if(sqrt(pow(x4, 2) + pow(y4, 2)) == R)
		{
			cout << "x and y are correct" << endl;
			cout << "x4 = " << x4 << " y4 = " << y4 << endl;
		}
			else if(sqrt(pow(x5, 2) + pow(y5, 2)) == R)
		{
			cout << "x and y are correct" << endl;
			cout << "x5 = " << x5 << " y5 = " << y5 << endl;
		}
		else
		{
			cout << "Any numbers are incorrect" << endl;
		}
		break;
		
	}
	
		system("pause");
		return 0;
}
