// TrianglePatterWithReverseAlphabate
#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        char ch = 'A' + i;
        for (int j = i+1; j > 0; j--)
        {
            cout << ch;
            ch -= 1;  
        }
        cout << endl;
    }
    
}