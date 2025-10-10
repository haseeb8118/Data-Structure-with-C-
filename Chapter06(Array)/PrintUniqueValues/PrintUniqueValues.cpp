#include <iostream>
using namespace std;

void uniqueValue(int array[], int size){ 
    for (int i = 0; i < size; i++)
    {
        int findDuplicates = 0;
        for (int j = 0; j < size; j++)
        {
            if(i != j){
                if(array[i] == array[j]){
                    findDuplicates += 1;
                }
            }
        }
        if(findDuplicates == 0){
            cout << array[i] << endl;
        }
        
    }    
}

int main(){
    int array[] = {1,4,1,3,4,6,3,2,5,2,5};
    int arraySizeInBytes = sizeof(array); 
    int elementSizeInBytes = sizeof(array[0]); 
    int length = arraySizeInBytes / elementSizeInBytes;

    uniqueValue(array, length);
}