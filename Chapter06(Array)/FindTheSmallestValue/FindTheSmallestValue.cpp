#include <iostream>
using namespace std;

int main(){
    int array[] = {43, 21, 76,11 ,9, 99};
    int arraySizeInBytes = sizeof(array); 
    int elementSizeInBytes = sizeof(array[0]); 
    int length = arraySizeInBytes / elementSizeInBytes;
    
    int smallest = INT_MAX;

    for (int i = 0; i < length; i++)
    {
        // if(array[i] < smallest){
        //     smallest = array[i];
        // }
        smallest = min(array[i], smallest);
    }
    cout << "smallest value is: " << smallest;
    
}