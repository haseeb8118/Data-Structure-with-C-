#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // 1. Must be greater than 0
    // 2. The bitwise AND between n and (n-1) must be 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if (isPowerOfTwo(num))
    {
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}