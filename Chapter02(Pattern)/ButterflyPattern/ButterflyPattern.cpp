#include <iostream>
using namespace std;

int main(){
    int n=4;
    //TOP PART
    /*
    *      *
    **    **
    ***  ***
    ********
    */
    for (int i = 0; i < n; i++)
    {
        //STARS
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        //SPACES
        for (int j = 0; j < n+2-(i*2); j++)
        {
            cout << " ";
        }
        //STARS
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //Bottom Part
    /*
    ********
    ***  ***
    **    **
    *      *
    */
    for (int i = 0; i < n; i++)
    {
        //STARS
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        //SPACES
        for (int j = 0; j < i*2; j++)
        {
            cout << " ";
        }
        //STARS
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
}