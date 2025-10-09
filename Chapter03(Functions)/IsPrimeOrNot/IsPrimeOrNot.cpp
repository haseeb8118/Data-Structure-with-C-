#include <iostream>
using namespace std;

void IsPrimeOrNot(int num){
    bool isPrime = true;
    // Edge case: Primes start at 2
    if (num <= 2) {
        // If the user entered 2, we should print 2 before exiting
        if (num == 2) {
             cout << "It is a prime number";
        }
        return; 
    }

    for (int i = 2; i < num; i++)
    {
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << "It is a prime number";
    }
    else{
        cout << "Not a prime number";
    }
}

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    IsPrimeOrNot(num);
}