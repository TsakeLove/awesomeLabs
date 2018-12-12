#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;
void Arr_print(int N, double **arr)
{
	int temp = 0;
	temp = N;
	for (int j = 0; j < N; j++) {

		cout << "|   ";
		while (temp != 0)
		{
			cout << arr[j][N - temp] << "  ";
			temp = temp - 1;
		}
		cout << endl;
		temp = N;

	}

}
void Matrix_convert(int i_max, int j_max, int N, double **arr)
{
	double **arr_A = new double*[N-1];
	for (int count = 0; count < N-1; count++) {
		arr_A[count] = new double[N-1];
	}
	int i_count = 0;
	int j_count = 0;
	int string_controler = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((j != j_max) && (i != i_max))
			{
				string_controler++;
				arr_A[i_count][j_count] = arr[i][j];
				j_count++;
				if (j_count == N - 1)j_count = 0;
			}
		}
		if (string_controler != 0)
		{
			i_count++;
			string_controler = 0;
			if (i_count == N - 1) i_count = 0;

		}
	}
	Arr_print(N - 1, arr_A);
}
void Find_max(int N, double **arr)
{
	int i_max = 0;
	int j_max = 0;
	double max_element = arr[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (abs(arr[i][j]) > max_element)
			{
				max_element = abs(arr[i][j]);
				i_max = i;
				j_max = j;
			}
		}
	}
	cout << endl;
	cout << "Max: "<<max_element;
	cout << endl;
	cout << " You have convert  matrix A (" << (N-1) << "x" << (N-1) << "):" << endl;
	Matrix_convert(i_max, j_max, N, arr);
}


void Enter_arr_A(int N, double **arr_A)
{


	cout << "You have matrix A (" << N << "x" << N << ")" << endl;
	cout << "Please, enter elements of matrix A:\n" << endl;



	for (int i = 0; i <N; i++)
	{
		for (int j = 0; j < N; j++) {

			cout << "A[" << i << "][" << j << "] = ";
			cin >> (arr_A[i][j]);
			cout << endl;
		}
	}


	cout << " You have matrix A (" << N << "x" << N << "):" << endl;
	Arr_print( N, arr_A);
}
int main()
{
	
		int N = 0;
		int M = 0;
		int K = 0;
			cout << "Matrix A (NxN) \n" << endl;
			cout << "Enter your N (N>0): ";
			cin >> N;
			double **arr_A = new double*[N];
			for (int count = 0; count < N; count++) {
				arr_A[count] = new double[N];
			}
			Enter_arr_A(N, arr_A);
			Find_max(N, arr_A);
			_getch();
	return 0;
}

