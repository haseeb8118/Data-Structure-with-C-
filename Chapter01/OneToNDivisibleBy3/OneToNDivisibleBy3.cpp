// Sum of N numbers which are divisible by 3

#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout << "Enter any number: ";
    cin >> n;

    for(int i=1; i <= n; i++){
        if(i%3==0){
            sum += i;
        }
    }
    cout << sum;
}