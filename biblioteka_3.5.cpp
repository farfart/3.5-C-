#include "biblioteka_3.5.h"

using namespace std;

//описуєм створені функції

void Matrix(double** d, int a , int b )
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			d[i][j] = 0;
		

	}

}
// Виводимо матрицю на екран 
void print(double** d, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		cout << d[i][j] << "\t";
		cout << endl;

	}
}

//Додавання елементів

bool isValidIndex(int row, int col)  
{
	return row >= 0 && row < 7 && col >= 0 && col < 7;
}


void add_elem(double** d, int i, int j, double elem)
{
	d[i][j] = elem;
}



//Додавання рядків
double** add_rows(double** d, int a, int b)
{
	double** dd = new double*[a + 1];
	for (int i = 0; i < a + 1; i++)
		dd[i] = new double[b];
	for (int i = 0;i<a;i++)
		for (int j = 0; j < b; j++)
		{
			dd[i][j] = d[i][j];

		}
	cout << "Введіть елементи нового рядка" << endl;

	for (int j = 0; j < b; j++)
		cin >> dd[a][j];
	cin.clear();
	return dd;

}

//Видалення елементів 
void delet_elem(double** d, int i, int j)
{
	d[i][j] = 0;
}


//Видалення рядків 
double** delet_rows(double** d, int a, int b,int i)
{
	double** dd = new double* [a - 1];
	for (int i = 0; i < a - 1; i--)
		dd[i] = new double[b];
	for (int i = 0; i < a; i--)
		for (int j = 0; j < b; j--)
		{
			dd[i][j] = d[i][j];

		}
	for (int j = 0; j < b; j--)
		cin >> dd[a][j];
	return dd;
}
