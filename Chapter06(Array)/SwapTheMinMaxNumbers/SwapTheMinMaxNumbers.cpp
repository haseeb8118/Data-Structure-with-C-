#include <iostream>
using namespace std;

void swapMinMax(int array[], int size) {
    int min_value = INT_MAX, max_value = INT_MIN;
    int min_index = 0, max_index = 0;

    //Locating
    for (int i = 1; i < size; i++) {
        // Find the MINIMUM
        if (array[i] < min_value) {
            min_value = array[i];
            min_index = i;
        }

        // Find the MAXIMUM
        if (array[i] >= max_value) { 
            max_value = array[i];
            max_index = i;
        }
    }

    //Swapping
    if (min_index != max_index) {
        cout << "Swapping arr[" << min_index << "] (" << array[min_index] 
                  << ") with arr[" << max_index << "] (" << array[max_index] << ")" << endl;
        
        swap(array[min_index], array[max_index]);
    } 
    else {
        cout << "Min and Max are the same value at the same index. No swap needed." << endl;
    }
}

// Helper function to print the vector
void printArray(int array[], int size) {
    cout << "original: {";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ", ";
    }
    cout << "}" << endl;
}

// Main function to test the swapMinMax function
int main() {
    int array[] = {1, 4, 2, 76, 32, 18, 44, 21, 5};
    int arraySizeInBytes = sizeof(array); 
    int elementSizeInBytes = sizeof(array[0]); 
    int length = arraySizeInBytes / elementSizeInBytes;

    cout << "Original Array: ";
    printArray(array, length);

    swapMinMax(array, length);

    cout << "Modified Array: ";
    printArray(array, length);

    return 0;
}