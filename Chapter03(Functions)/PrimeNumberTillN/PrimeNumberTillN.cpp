#include <iostream>
using namespace std;

void printPrime(int num){
    // Edge case: Primes start at 2
    if (num <= 2) {
        return; 
    }
    
    for (int i = 2; i < num; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    
}

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    printPrime(num);
}