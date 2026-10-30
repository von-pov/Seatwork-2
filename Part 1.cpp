/******************************************************************************
 
if the number is positive, and how many digits the number has
 
*******************************************************************************/

#include <iostream>

using namespace std;

int main()

{
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 9999 || num < -9999) {
        cout << "The number must have a maximum of four digits.";
    }
    else if (num <= 0) {
        cout << "It is a non-positive number.";
    }
    else if (num <= 9){
        cout << "It is a 1-digit positive number.";
    }
    else if (num <= 99) {
        cout << " It is a 2-digit positive number";
    }
    else if (num <= 999) {
        cout << "It is a 3-digit positive number.";
    }
    else {
        cout << "It is a 4-digit positive number";
    }
    
    return 0;

}
 