#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char oper;
    double num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (oper) {
        case '+':
            cout << fixed << setprecision(2) << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << fixed << setprecision(2) << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << fixed << setprecision(2) << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0.0) {
                cout << fixed << setprecision(2) << num1 << " / " << num2 << " = " << num1 / num2;
            } else {
                cout << "Error! Division by zero is not allowed.";
            }
            break;
        default:
            cout << "Error! The operator is not correct";
            break;
    }
    cout << endl;
    return 0;
}
