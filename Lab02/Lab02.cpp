// Lab_02.cpp
// Маркіян Горб'як
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 3
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;  // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    // double z2; // результат обчислення 2-го виразу

    cout << "a = ";
    cin >> a;

    z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2));
    

    cout << endl;
    cout << "z1 = " << z1 << endl;
    

    cin.get();
    cin.get();
    return 0;
}