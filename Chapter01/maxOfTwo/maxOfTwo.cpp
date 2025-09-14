#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    if(firstNumber > secondNumber){
        cout << "Maximum number is: " << firstNumber;
    }
    else{
        cout << "Maximum number is: " << secondNumber;
    }
}