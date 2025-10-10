#include <iostream>
using namespace std;

int ReverseIntegerN(int num){
    int ans = 0; 
    while(num > 0){ 
        int rem = num%10;
        num = num/10; 
        ans = ans * 10 + rem;
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << ReverseIntegerN(num);
}