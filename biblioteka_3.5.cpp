#include "biblioteka_3.5.h"

using namespace std;

//îïèñóºì ñòâîðåí³ ôóíêö³¿

void Matrix(double** d, int a , int b )
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			d[i][j] = 0;
		

	}

}
// Âèâîäèìî ìàòðèöþ íà åêðàí 
void print(double** d, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		cout << d[i][j] << "\t";
		cout << endl;

	}
}

//Äîäàâàííÿ åëåìåíò³â

void add_elem(double** d, int i, int j, double elem)
{
	d[i][j] = elem;
}



//Äîäàâàííÿ ðÿäê³â
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
	for (int j = 0; j < b; j++)
		cin >> dd[a][j];
	return dd;

}

//Âèäàëåííÿ åëåìåíò³â 
void delet_elem(double** d, int i, int j)
{
	d[i][j] = 0;
}


//Âèäàëåííÿ ðÿäê³â 
double** delet_rows(double** d, int a, int b)
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
