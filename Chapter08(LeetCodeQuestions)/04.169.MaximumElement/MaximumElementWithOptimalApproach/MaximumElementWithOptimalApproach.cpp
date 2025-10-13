#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaximumElementWithOptimalApproach(vector<int>& array){
    int frequency = 1, ans = array[0];
    for (int i = 1; i < array.size(); i++)
    {
        if(array[i] == array[i-1]){
            frequency += 1;
        }
        else{
            frequency = 1;
            ans = array[i];
        }
        if(frequency > array.size()/2){
            return ans;
        }
    }
    return -1;  
}

int main(){
    vector<int> vec = {2,2,1,1,1,2,2};
    sort(vec.begin(), vec.end());
    cout << MaximumElementWithOptimalApproach(vec) << " is the maximum value.";
}