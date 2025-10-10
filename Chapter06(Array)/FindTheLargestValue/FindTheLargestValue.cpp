#include <iostream>
using namespace std;

int main(){
    int array[] = {43, 21, 76,11 ,9, 99};
    int arraySizeInBytes = sizeof(array); 
    int elementSizeInBytes = sizeof(array[0]); 
    int length = arraySizeInBytes / elementSizeInBytes;
    
    int largest = INT_MIN;

    for (int i = 0; i < length; i++)
    {
        // if(array[i] > largest){
        //     largest = array[i];
        // }
        largest = max(array[i], largest);
    }
    cout << "largest value is: " << largest;
    
}