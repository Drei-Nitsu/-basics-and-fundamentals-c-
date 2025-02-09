#include <iostream>
using namespace std;

int main() {
    int array1[10], array2[10], mergedArray[20];
    int size1, size2, mergedSize;

    while (true) {
        cout << "Enter the number of elements for the first array (max 10): ";
        cin >> size1;

        if (size1 >= 1 && size1 <= 10) {
            break;
        } else {
            cout << "Invalid size. Please enter a number between 1 and 10." << endl;
        }
    }
    cout << "Enter " << size1 << " elements for the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> array1[i];
    }
    while (true) {
        cout << "Enter the number of elements for the second array (max 10): ";
        cin >> size2;

        if (size2 >= 1 && size2 <= 10) {
            break; 
        } else {
            cout << "Invalid size. Please enter a number between 1 and 10." << endl;
        }
    }
    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
    }

    mergedSize = size1 + size2;  
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];  
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];  
    }

    for (int i = 0; i < mergedSize - 1; i++) {
        
        int largestIndex = i;
        for (int j = i + 1; j < mergedSize; j++) {
            if (mergedArray[j] > mergedArray[largestIndex]) {
                largestIndex = j;  
            }
        }

        if (largestIndex != i) {
            int temp = mergedArray[i];
            mergedArray[i] = mergedArray[largestIndex];
            mergedArray[largestIndex] = temp;
        }
    }

    cout << "Merged array in descending order: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
//Hello
    
    return 0;
}
