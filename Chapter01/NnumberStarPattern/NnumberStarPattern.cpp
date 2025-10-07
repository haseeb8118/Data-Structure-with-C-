#include <iostream>
using namespace std;

int main(){
    int n,m=0;
    cout << "Enter any number: ";
    cin >> n;
    for(int i=0; i<n; i++){
        m = 5;
        for (int j = 0; j < m; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}