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

int nCr(int n, int r){
    int fact_n = factorialN(n);
    int fact_r = factorialN(r);
    int fact_nMr = factorialN(n-r);
    return (fact_n/(fact_r*fact_nMr));
}

int main(){
    int n, r;
    cout << "Enter n value: ";
    cin >> n;
    cout << "Enter r value: ";
    cin >> r;

    cout << "Binomial Coefficient is: " << nCr(n, r);
}