// Lab_04_2.cpp
// Котович Максим Михайлович
// Лабораторна робота № 4.2
// Розгалуження, задане графіком функції.
// Варіант 20

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(4) << "x" << "    |"
         << setw(6) << "y" << "     |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = x * x;
        if (x <= -5)
            B = exp(x - floor(x));
        else 
            if (x > -5 && x <= 3)
                B = tan(x + 1) - 3.2 + log10(1 + pow(8, x));
            else 
                B = sqrt(abs(x));
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;

    return 0;
}