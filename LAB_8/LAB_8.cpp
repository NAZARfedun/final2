#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
//#include <iomanip>
//#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
	
	cout << "**********Task8.1**********\n";
	float matrix_A[3][3] = {{-1, 2, 3.1}, {0, 4, 5.2}, {3, 2, 1}};
	cout << "Matrix A(3,3):\n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << " " << matrix_A[i][j];
		}
		cout << endl;
	}
	
	float matrix_B[3][3] = {{1.5, 6, 0}, {0, 2, 1}, {1, 0, 0}};
	cout << "Matrix B(3,3):\n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << " " << matrix_B[i][j];
		}
		cout << endl;
	}
	
	float matrix_C[3][3];
	cout << "Matrix C(3,3):\n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j];
			cout << " " << matrix_C[i][j];
		}
		cout << endl;
	}
	cout << endl;
	
	
	
	cout << "**********Task8.2**********\n";
	srand(time(NULL));
	int row, col, count = 0;
	cout << "Enter rows(<= 7): "; cin >> row;
	cout << "Enter cols(<= 5): "; cin >> col;
	int matrix[row][col];
	
	cout << "Matrix with random elemets:\n";
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			matrix[i][j] = rand();
			cout << " " << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			if(j > i && matrix[i][j] > 0)
			{
				count++;
			}
		}
	}
	cout << "Count of + elements which higher main diagonal: " << count << endl;
	
	
	cout << "**********Task8.3**********\n";
	srand(time(NULL));
	int matrix1[5][6]; int new_matrix1[5][6];
	int mult = 1;
	int min_row, min_col, min = 10000;
	
	//вивід матриці (5,6)
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			matrix1[i][j] = rand();
			cout << " " << matrix1[i][j];
		}
		cout << endl;
	}
	
	//пошук мінімального елемента матриці
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			if(matrix1[i][j] < min)
			{
				min = matrix1[i][j];
				min_row = i;
				min_col = j;
			}
		}
	}
	cout << "The minimul matrix' element: " << min << endl;
	
	//видалення рядка
	int f;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			f = i;
			if(i + 1 >= min_row)
			{
				f -= 1;
			}
			new_matrix1[f][j] = matrix[i][j];
		}
	}
	
	//видалення стовбця
	int s;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			s = j;
			if(j + 1 >= min_col)	
			{
				s -= 1;
			}
			new_matrix1[i][s] = matrix1[i][j];
		}
	}
	
	//вивід нової матриці
	cout << "\nNew Matrix:\n";
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cout << " " << new_matrix1[i][j];
		}
		cout << endl;
	}

	
	//добуток елементів головної матриці
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(i == j)
			{
				mult *= new_matrix1[i][j];
			
			}
		}
	}
	cout << "Mult of elements of main diagonal: " << mult << endl;
	
}
