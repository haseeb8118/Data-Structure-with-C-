#include <iostream>
using namespace std;

void reverseArrayEven(int arr[], int size){
    int start = 0, end = size-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseArrayOdd(int arr[], int size){
    int start = 0, end = size-1;
    while(start != end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int array[] = {1,4,2,76,32,18,44,21,5};
    int arraySizeInBytes = sizeof(array); 
    int elementSizeInBytes = sizeof(array[0]); 
    int length = arraySizeInBytes / elementSizeInBytes;

    //print original array
    cout << "original: {";
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << ", ";
    }
    cout << "}" << endl;

    //check even and odd size or array
    if(length%2 ==0){
        reverseArrayEven(array, length);
    }
    else{
        reverseArrayOdd(array, length);
    }

    //print reversed array
    cout << "reverse: {";
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << ", ";
    }
    cout << "}" << endl;
    
}