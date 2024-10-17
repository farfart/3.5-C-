#pragma once
#include <iostream>

//створюємо функції

// ініціалізуємо матрицю
void Matrix (double**d, int a, int b); // а - рядок, b - колонки

// Виводимо матрицю на екран 
void print(double** d, int a, int b);

//Додавання елементів
void add_elem(double** d, int i, int j, double elem);
//Додавання рядків
double** add_rows(double** d, int a, int b);

//Видалення елементів 
void delet_elem (double** d, int a, int b );

//Видалення рядків 
double** delet_rows(double** d, int a, int b, int i );
