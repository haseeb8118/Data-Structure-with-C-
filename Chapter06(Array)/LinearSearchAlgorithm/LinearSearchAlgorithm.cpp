#include <iostream>
using namespace std;

int linearSearch(int array[], int length, int target){
    for (int i = 0; i < length; i++)
    {
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[] = {1,34,42,67,77,21,3,90,655,32,19}; 
    int target = 3;
    int arraySizeInBytes = sizeof(array); 
    int elementSizeInBytes = sizeof(array[0]); 
    int length = arraySizeInBytes / elementSizeInBytes;

    cout << target << " is at index: " << linearSearch(array, length, target);

}