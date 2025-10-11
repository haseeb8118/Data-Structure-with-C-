#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 4, 2, 7, 2, 1, 9, 3, 6, 10};
    for (int start = 0; start < vec.size(); start++)
    {
        for (int end = start; end < vec.size(); end++)
        {
            for (int i = start; i < end; i++)
            {
                cout << vec[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    
}