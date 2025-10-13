#include <iostream>
#include <vector>
using namespace std;

int MaximumElementWithBruteForce(vector<int>& array){
    for (int val: array)
    {
        int frequency = 0;
        for (int inner_val: array)
        {
            if(val == inner_val){
                frequency++;
            }
        }
        if (frequency > array.size()/2)
        {
            return val;
        }
    }
    return -1;  
}

int main(){
    vector<int> vec = {2,2,1,1,1,2,2};
    cout << MaximumElementWithBruteForce(vec) << " is the maximum value.";
}