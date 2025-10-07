// Factorial of a number
#include <iostream>
using namespace std;

int main(){
    int number, count = 1, product = 1;
    cout << "Enter any number: ";
    cin >> number;

    while(count <= number){
        product = product * count;
        count += 1;
    }
    cout << "factorial of " << number << " is: " << product;
}