﻿// home.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
char sym1, sym2, sym3;
int num1, num2, num3;

int main()
{

    setlocale(LC_ALL, "Russian");

    cin >> sym1;
    cin >> sym2;
    cin >> sym3;
    int sum = sym1 + sym2 + sym3;
    cout << sum << endl;
    char sum2 = sum;
    char num1 = sum - sym2 - sym3;
    char num2 = sum - sym1 - sym3;
    char num3 = sum - sym2 - sym1;
    cout << num1 << "\t";
    cout << num2 << "\t";
    cout << num3 << "\t" << endl;

    /*cout << "Введите первый символ\t";
    cin >> sym1;
    cout << sym1 << endl;
    num1 = sym1;

    cout << "Введите второй символ\t";
    cin >> sym2;
    cout << sym2 << endl;
    num2 = sym2;

    cout << "Введите третий символ\t";
    cin >> sym3;
    cout << sym3 << endl;
    num3 = sym3;

    cout << num1 << num2 << num3 << endl;
    cout << sym1 << sym2 << sym3;*/

    return 0;

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
