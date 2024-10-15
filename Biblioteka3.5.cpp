/*
* Розробити бібліотеку функцій для роботи з матрицями дробових чисел(ініціалізація,
    виведення на екран, видалення та додавання елементів, рядків).
*/
#include "biblioteka_3.5"
#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    do
    {
        int choise;
        cout << "1: Додати елемент\t";
        cout << "2: Додати рядок\t";
        cout << "3: Видалити елемент\t";
        cout << "4: Видалити рядок\t";
        cout << "0: Вихід з програми\t";
        cin >> choise;

        switch (choise)
        {
        case 1:
            cout << " Введіть х та у позицію елемента по черзі"<< endl; 
            cin >> i>> endl; 
            cin>>j>>endl;
            cout<<"Введіть ваш елемент"<<endl;
            cin>>elem;
            if(i<a && j<b)
            {
                void add_elem(double** d, int i, int j, double elem);
                cout <<endl;
                void print(double** d, int a, int b);
                cout <<endl;
                break;
            }
            else
            {
                cout <<"Позиції х та у виходять за межі масиву";
                break;
            }
            case 2: 
            double** add_rows(double** d, int a, int b);
            cout << endl; 
            void print(double** d, int a, int b);
            cout <<endl;
            break;
            case 3:
            cout << " Введіть х та у позицію елемента по черзі"<< endl; 
            cin >> i>> endl; 
            cin >>j>>endl;
            if(i<a && j<b)
            {
                void delet_elem (double** d, int a, int b);
                cout <<endl;
                void print(double** d, int a, int b);
                cout <<endl;
                break;
            }
            else
            {
                cout <<"Позиції х та у виходять за межі масиву";
                break;
            }
            case 4:
            double** delet_rows(double** d, int a, int b);
            cout<<endl;
            void print(double** d, int a, int b);
            cout <<endl;
            break;
        default:
            cout <<"Помилка, виберіть один з заданих варіантів";
            break;
        }

    } while (choise != 0)
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
