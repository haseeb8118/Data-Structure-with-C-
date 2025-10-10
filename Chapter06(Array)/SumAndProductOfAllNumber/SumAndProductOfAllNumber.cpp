#include <iostream>
using namespace std;

int SumOfAllNumbers(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int ProductOfAllNumbers(int arr[], int size){
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main(){
    int array[] = {1,4,2,76,32,18,44,21,5};
    int arraySizeInBytes = sizeof(array); 
    int elementSizeInBytes = sizeof(array[0]); 
    int length = arraySizeInBytes / elementSizeInBytes;

    cout << "Sum of all numbers: " << SumOfAllNumbers(array, length) << endl;
    cout << "Product of all numbers: " << ProductOfAllNumbers(array, length) << endl;
}