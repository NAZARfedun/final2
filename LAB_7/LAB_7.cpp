#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv)
{
	
	cout << "**********Task7.1**********\n";
	int pos = 0;
	float arr[6] = {6.2, -3.2, 0.0, 3.3, 2.2, -3.6};
	for(int i = 0; i < 6; i++)
	{
		cout << " " << arr[i];
		if(arr[i] > 0)
		{
			pos += 1;
		}
	}
	cout << endl;
	cout << "count of pos elements: " << pos << endl;
	
	
	
	cout << "**********Task7.2**********\n";
	float arr1[] = {3.2, -0.3, 6.3, 2.3, -3};
	float arr2[] = {10.6, 8.3, 9.4, -3.2, 6.1};
	cout << "1st array:\n";
	for(int j = 0; j < 5; j++)
	{
		cout << " " << arr1[j];
	}
	cout << "\n2nd array:\n";
	for(int q = 0; q < 5; q++)
	{
		cout << " " << arr2[q];
	}
	cout << "\nNew 1st array:\n";
	for(int i = 0; i < 5; i++)
	{
		if(arr2[i] > 0)
		{
			arr1[i] += 10;
			cout << " " << arr1[i];
		}
	}
	cout << endl;
	
	

	cout << "**********Task7.3**********\n";
	//srand(time(NULL));
	float arr3[8] = {};
	//Ввід елементів масиву
	cout << "Enter arr's elements:\n";
	for(int i = 0; i < 8; i++)
	{
		cin >> arr3[i];
		//arr[i] = rand();
	}
	
	//Вивід Масиву
	for(int i = 0; i < 8; i++)
	{
		cout << " " << arr3[i];
	}
	cout << endl;
	
	int count = 0;
	for(int i = 0; i < 8; i++)
	{
		if(arr3[i]== 0)
		{
			count++;
		}
	}
	cout << "count of zero numbers after 1st 0: " << count-1 << endl;
	
	
	
	cout << "**********Task7.4**********\n";
	int workers;
	int min_pay, max_pay;
	float salary_midpoint;
	cout << "Enter count of workers: ";
	cin >> workers;
	int arr4[workers];
	min_pay = 100000000;
	max_pay = 0;
	

	
	cout << "Enter salary of every worker:\n";
	for(int i = 0; i < workers; i++)
	{
		cin >> arr4[i];
		if(arr[i] > max_pay)
		{
			max_pay = arr4[i];
		}
		if(arr[i] < min_pay)
		{
			min_pay = arr4[i];
		}
	}
	
	cout << "\nmax pay: " << max_pay << endl;
	cout << "min pay: " << min_pay << endl;
	
	salary_midpoint = (min_pay + max_pay) / 2;
	
	for(int i = 0; i < workers; i++)
	{
		if(arr4[i] > salary_midpoint)
		{
			cout << arr[i] << " > salary midpoint. Index - " << i << endl;
		}
	}	
	cout << endl;
	
	return 0;
	system("pause");
}
