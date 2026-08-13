#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    const double PI = 3.14159;

    cout << "\nChoose one of these shapes:";
    cout << "\n1. Rectangle \n2. Square \n3. Circle \n4. Triangle";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1: {
            double length, width;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;

            double area = length * width;
            double perimeter = 2 * (length + width);

            cout << "\nArea is: " << area;
            cout << "\nPerimeter is: " << perimeter;
            break;
        }

        case 2: {
            double side;
            cout << "Enter side of the square: ";
            cin >> side;

            double area = side * side;
            double perimeter = 4 * side;

            cout << "\nArea is: " << area;
            cout << "\nPerimeter is: " << perimeter;
            break;
        }

        default:
            cout << "Invalid option selected";
            break;
    }

    return 0;
}