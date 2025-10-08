// 145 => 1+4+5 = 10

#include <iostream>
using namespace std;

int SumOfDigitOfNumber(int num){
    int digitSum = 0;
    while (num > 0){
        digitSum += num%10;
        num = num/10;
    }
    return digitSum;
}

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << "Sum of digit of number " << num << " is " << SumOfDigitOfNumber(num);
}