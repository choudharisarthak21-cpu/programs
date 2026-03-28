#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nChoose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Addition = " << a + b;
            break;

        case 2:
            cout << "Subtraction = " << a - b;
            break;

        case 3:
            cout << "Multiplication = " << a * b;
            break;

        case 4:
            if(b != 0)
                cout << "Division = " << a / b;
            else
                cout << "Error! Division by zero.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}