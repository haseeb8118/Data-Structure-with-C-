#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& vec, int target){
    for (int i = 0; i < vec.size(); i++)
    {
        if(target == vec[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {1, 4, 2, 7, 2, 1, 9, 3, 6, 10};
    int target = 6;
    cout << "target: " << target << " found at index number: " << linearSearch(vec, target);
}