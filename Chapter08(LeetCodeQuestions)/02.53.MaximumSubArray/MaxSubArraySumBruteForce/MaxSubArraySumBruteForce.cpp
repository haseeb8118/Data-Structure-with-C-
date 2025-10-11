#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSum = INT_MIN;
    for (int start = 0; start < vec.size(); start++)
    {
        int currectSum = 0;
        for (int end = start; end < vec.size(); end++)
        {
            currectSum += vec[end];
            maxSum = max(currectSum, maxSum);
        }
    }
    cout << "Max sum value is: " << maxSum;
    
}