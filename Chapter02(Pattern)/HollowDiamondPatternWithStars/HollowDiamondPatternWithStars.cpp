// HollowDiamondPatternWithStars
/*
   1
  121
 12321
1234321
*/
#include <iostream>
using namespace std;

int main(){
    //Top outerloop
    //     *
    //    * *
    //   *   *
    //  *     *
    for (int i = 0; i < 4; i++)
    {
        //initial space
        for (int j = 4-i-1; j > 0; j--)
        {
            cout << " ";
        }
        //star
        cout << "*";
        //right side space and star
        if(i != 0){
            //right side space
            for (int j = 2*i-1; j >= 1; j--)
            {
                cout << " ";
            }
            //right side star
            cout<< '*';
        }
        cout << endl;
    }

    //bottom outerloop
    //  *   *
    //   * *
    //    * 
    for (int i = 0; i < 4-1; i++)
    {
        //initial space
        for (int j = 0; j < i+1; j++)
        {
            cout << " ";
        }
        //star
        cout << "*";
        //right side space and star
        if(i != 4-2){
            for (int j = 0; j < 2*(4-i)-5; j++)
            {
                cout << " ";
            }
            cout<< '*';
        }
        cout << endl;
    }
}