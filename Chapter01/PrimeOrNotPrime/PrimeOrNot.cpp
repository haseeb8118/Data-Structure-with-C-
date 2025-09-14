#include <iostream>
using namespace std;

int main(){
    int n, i = 2;
    cout << "Enter any number: ";
    cin >> n;
    while(i < n){
        if(n%i == 0){
            cout << "Not a prime number";
            break;
        }
    i+=1;
    }
    cout << "It is a prime number";
}