// TrianglePatterWithSameNumberInLine
/*
1
22
333
4444
*/
#include <iostream>
using namespace std;

int main(){
    int num =1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << num;
        }
        num+=1;
        cout << endl;
        
    }
    
}