#include <iostream>
using namespace std;

int factorialN(int num){
    int sum = 1;
    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }
    return sum;
}

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorialN(num);
}