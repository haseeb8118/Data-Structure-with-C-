#include <iostream>
#include <vector>
using namespace std;

void ReverseVectorEven(vector<int>& vec){
    int start = 0, end = vec.size() - 1;
    while(start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

void ReverseVectorOdd(vector<int>& vec){
    int start = 0, end = vec.size() - 1;
    while(start != end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> vec = {1, 4, 2, 7, 2, 1, 9, 3, 6, 10};    
    
    //print original array
    cout << "original: {";
    for (int val: vec)
    {
        cout << val << ", ";
    }
    cout << "}" << endl;

    //check even and odd size or array
    if(vec.size()%2 ==0){
        ReverseVectorEven(vec);
    }
    else{
        ReverseVectorOdd(vec);
    }

    //print reversed array
    cout << "reverse: {";
    for (int val: vec)
    {
        cout << val << ", ";
    }
    cout << "}" << endl;
    
}