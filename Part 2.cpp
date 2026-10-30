/******************************************************************************
 
2.	Write a program that allows the user to select an arithmetic operator to be applied to the two floating numbers inputted by the user using a switch statement.
 
*******************************************************************************/

#include <iostream>

using namespace std;

int main()

{
    double num1, num2, output;
    char operation;
    
    cout << "Enter the two numbers: \n";
    cin >> num1 >> num2;
    
    cout << "Enter the operator (+, -, *, /): ";
    cin >> operation;
    
    switch (operation) {
        case '+':
            output = num1 + num2;
            cout << "The result of the operation is: " << output;
            break;
        case '-':
            output = num1 - num2;
            cout << "The result of the operation is: " << output;
            break;
        case '*':
            output = num1 * num2;
            cout << "The result of the operation is: " << output;
            break;
        case '/':
            if (num2 != 0) {
                output = num1 / num2;
                cout << "The result of the operation is: " << output;
            } else {
                cout << "Error: Cannot divide by zero.";
            }
            break;
        default:
            cout << "Invalid operator.";
    }
    
    return 0;

}
 
