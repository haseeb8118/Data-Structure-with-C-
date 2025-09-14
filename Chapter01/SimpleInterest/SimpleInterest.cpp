#include <iostream>
using namespace std;

int main(){
    int principal, rate, time, simpleInterest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter time: ";
    cin >> time;

    simpleInterest = principal * rate * time;

    cout << "Simple Interest is: " << simpleInterest;

}