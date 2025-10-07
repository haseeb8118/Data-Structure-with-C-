// InvertedTrianglePatternSameNumber
/*
 1111
  222
   33
    4
*/
#include <iostream>
using namespace std;

int main(){
    char ch = 'A';
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << " ";
        }
        for (int k = 4-i; k > 0; k--)
        {
            cout << ch;
        }
        cout << endl;
        ch+=1;
    }
    
}