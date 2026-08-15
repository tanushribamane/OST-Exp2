#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double a, b;

    cout << "1. Rectangle\n";
    cout << "2. Square\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter length and width: ";
        cin >> a >> b;

        cout << "Area = " << a * b << endl;
        cout << "Perimeter = " << 2 * (a + b) << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter side: ";
        cin >> a;

        cout << "Area = " << a * a << endl;
        cout << "Perimeter = " << 4 * a << endl;
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}
