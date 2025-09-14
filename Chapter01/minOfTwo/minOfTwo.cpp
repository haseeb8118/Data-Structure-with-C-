#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber;
    cout << "Enter any first numbers: ";
    cin >> firstNumber;
    cout << "Enter any second numbers: ";
    cin >> secondNumber;

    if(firstNumber < secondNumber){
        cout << "Minimum number is: " << firstNumber;
    }
    else{
        cout << "Minimum number is: " << secondNumber;
    }
}