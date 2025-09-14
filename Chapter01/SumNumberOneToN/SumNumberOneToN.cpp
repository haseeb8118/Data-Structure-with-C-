#include <iostream>
using namespace std;

int main(){
    int number, count = 1, sum = 0;
    cout << "Enter any number: ";
    cin >> number;

    while (count <= number){
        sum = sum + count;
        count++;
    }
    cout << "Sum of " << number << " is: " << sum;
}