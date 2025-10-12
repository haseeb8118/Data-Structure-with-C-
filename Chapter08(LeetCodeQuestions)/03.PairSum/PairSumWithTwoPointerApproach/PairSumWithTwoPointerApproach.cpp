#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSumWithBruteForce(vector<int>& array, int target){
    vector<int> answer;
    int start = 0, end = array.size()-1;
    while(start < end){
        int pairSum = array[start] + array[end];
        if (pairSum > target)
        {
            end--;
        }
        else if (pairSum < target)
        {
            start++;
        }
        else{
            answer.push_back(start);
            answer.push_back(end);
            return answer;
        }
        
    }
    return answer;   
}

int main(){
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = PairSumWithBruteForce(vec, target);
    
    cout << "(";
    for (int val: ans)
    {
        cout << val << ", ";
    }
    cout << ")";
}