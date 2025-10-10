#include <iostream>
using namespace std;

int DecimalToBinary(int decNum){
    int ans = 0, power = 1;
    while(decNum > 0){
        int rem = decNum%2;
        decNum = decNum/2;
        ans += rem * power;
        power *= 10;
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << DecimalToBinary(num);
}