#include <iostream>
using namespace std;

void FibonacciSeries(int num){
    // Initialize the first two terms
    int t1 = 0;
    int t2 = 1;

    // Base case 1: If user enters 0, print nothing
    if (num <= 0) {
        return;
    }

    // Base case 2: If user enters 1, print only the first term (0)
    if (num == 1) {
        cout << t1 << endl;
        return;
    }

    // Print the first two terms
    cout << t1 << " " << t2;

    for (int i = 2; i < num; i++)
    {
        // Calculate the next term
        int nextTerm = t1 + t2;

        // Print the next term
        cout << " " << nextTerm;

        // Update the terms for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if (num < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        cout << "Fibonacci Series: ";
        FibonacciSeries(num);
    }
    return 0;
}