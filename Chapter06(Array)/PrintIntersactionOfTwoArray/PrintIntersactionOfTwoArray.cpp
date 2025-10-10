#include <iostream>
using namespace std;

void IntersactionOfTwoArray(int arrayOne[], int sizeOne, int arrayTwo[], int sizeTwo){ 
    bool visited[11]; //size of second array
    for(int k = 0; k < sizeTwo; ++k) {
        visited[k] = false;
    }

    for (int i = 0; i < sizeOne; i++) {
        for (int j = 0; j < sizeTwo; j++) {
            if (arrayOne[i] == arrayTwo[j] && !visited[j]) {
                cout << arrayOne[i] << ", ";
                visited[j] = true;
                break; 
            }
        }
    }
}

int main(){
    int arrayOne[] = {9,4,1,3,4,6,3,2,5,2,5};
    int arrayTwo[] = {1,33,1,42,4,62,3,24,5,21,5};
    
    //length of array1
    int arraySizeInBytesOne = sizeof(arrayOne); 
    int elementSizeInBytesOne = sizeof(arrayOne[0]); 
    int lengthOne = arraySizeInBytesOne / elementSizeInBytesOne;

    //length of array1
    int arraySizeInBytesTwo = sizeof(arrayTwo); 
    int elementSizeInBytesTwo = sizeof(arrayTwo[0]); 
    int lengthTwo = arraySizeInBytesTwo / elementSizeInBytesTwo;

    IntersactionOfTwoArray(arrayOne, lengthOne, arrayTwo, lengthTwo);

    //it's not incorrect there are 2 5's in second array therefore I am not able to distinguish it
}