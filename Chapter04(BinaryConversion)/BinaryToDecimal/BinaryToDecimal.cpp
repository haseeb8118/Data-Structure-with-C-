#include <iostream>
using namespace std;

int BinaryToDecimal(int binNum){
    int ans = 0, power = 1;
    while(binNum > 0){
        int rem = binNum%10;
        binNum = binNum/10;
        ans += rem * power;
        power *= 2;
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << BinaryToDecimal(num);
}