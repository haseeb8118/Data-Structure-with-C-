#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSum = INT_MIN, currentSum = 0;
    for (int val: vec)
    {
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << "Max sum value is: " << maxSum;
}