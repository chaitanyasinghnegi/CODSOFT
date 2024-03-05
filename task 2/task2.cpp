#include <iostream>

using namespace std;

int main()
{
    cout << "Basic Calculator" << endl;
    int userChoice;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice : " << endl;
    cin >> userChoice;
    double num1, num2;
    switch (userChoice)
    {
    case 1:
        cout << "Addition : " << endl;
        cout << "Enter number 1 : ";
        cin >> num1;
        cout << "Enter number 2 : ";
        cin >> num2;
        cout << "Addition of " << num1 << " and " << num2 << " = " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Subtraction : " << endl;

        cout << "Enter number 1 : ";
        cin >> num1;
        cout << "Enter number 2 : ";
        cin >> num2;
        cout << "Subtraction of " << num1 << " and " << num2 << " = " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Multiplication : " << endl;
        cout << "Enter number 1 : ";
        cin >> num1;
        cout << "Enter number 2 : ";
        cin >> num2;
        cout << "Multiplication of " << num1 << " and " << num2 << " = " << num1 * num2 << endl;
        break;
    case 4:
        cout << "Addition : " << endl;
        cout << "Enter number 1 (dividend): ";
        cin >> num1;
        cout << "Enter number 2 (divisor): ";
        cin >> num2;
        if (num2 == 0)
        {
            cout << "Error! Divison by 0 not defined";
        }
        else
        {
            cout << "Divison of " << num1 << " and " << num2 << " = " << num1 / num2 << endl;
        }
        break;

    default:
        cout << "Wrong input! Try again";
        break;
    }
    return 0;
}