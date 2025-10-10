#include <iostream>
using namespace std;

int main(){
    int array[] = {43, 21, 76, 101, 11 ,9, 99};
    int arraySizeInBytes = sizeof(array); 
    int elementSizeInBytes = sizeof(array[0]); 
    int length = arraySizeInBytes / elementSizeInBytes;
    
    int largest = INT_MIN;
    int largestIndex;

    for (int i = 0; i < length; i++)
    {
         if(array[i] > largest){
             largestIndex = i;
             largest = array[i];
         }
    }
    cout << "largest value is: " << largest << " at index: " << largestIndex;
    
}