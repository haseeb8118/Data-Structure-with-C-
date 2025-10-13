#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaximumElementWithMooreAlgorithm(vector<int>& array){
    int frequency = 0, ans = 0;
    for (int i = 0; i < array.size(); i++)
    {
        if(frequency == 0){
            ans = array[i];
        }
        if(ans == array[i]){
            frequency ++;
        }
        else{
            frequency--;
        }
    }
    return ans;  
}

int main(){
    vector<int> vec = {2,2,1,1,1,2,2};
    cout << MaximumElementWithMooreAlgorithm(vec) << " is the maximum value.";
}