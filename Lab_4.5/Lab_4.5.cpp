// Lab_04_5.cpp
// Малаховський Назар
// Лабораторна робота № 4.5
// Попадання
// Варіант 20


#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    double x, y;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y >= 3 - (x - 2) * (x - 2) && y <= x && y > 0) ||
            (y >= 3 - (x - 2) * (x - 2) && y <= -x))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = -1 + 6. * rand() / RAND_MAX; 
        y = -3 + 8. * rand() / RAND_MAX; 

        if ((y >= 3 - (x - 2) * (x - 2) && y <= x && y > 0) ||
            (y >= 3 - (x - 2) * (x - 2) && y <= -x))
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}
