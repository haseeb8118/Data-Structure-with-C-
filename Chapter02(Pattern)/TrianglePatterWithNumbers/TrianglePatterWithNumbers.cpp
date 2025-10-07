// TrianglePatterWithNumbers
/*
1
12
123
1234
*/
#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout << j;
        }
        cout << endl;
        
    }
    
}