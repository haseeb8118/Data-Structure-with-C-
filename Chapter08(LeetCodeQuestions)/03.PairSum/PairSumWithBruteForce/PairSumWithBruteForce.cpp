#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSumWithBruteForce(vector<int>& array, int target){
    vector<int> answer;
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array.size(); j++)
        {
            if (array[i]+array[j] == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }   
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