#pragma once
#include <iostream>

//��������� �������

// ���������� �������
void Matrix (double**d, int a, int b); // � - �����, b - �������

// �������� ������� �� ����� 
void print(double** d, int a, int b);

//��������� ��������
void add_elem(double** d, int i, int j, double elem);
//��������� �����
double** add_rows(double** d, int a, int b);

//��������� �������� 
void delet_elem (double** d, int a, int b);

//��������� ����� 
double** delet_rows(double** d, int a, int b);