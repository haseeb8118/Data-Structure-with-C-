// PyramidPatternWithNumbers
/*
   1
  121
 12321
1234321
*/
#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 4-i-1; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i+1; k++)
        {
            cout << k;
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    
}