// Print all the uique values in an array
#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    cout << "Unique values in the array: ";
    
    for (int i = 0; i < size; i++) {
        int count = 0;
        
        // Count occurrences of arr[i]
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // If the count is exactly 1, it's unique
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// void unique(int arr[],int size){
//     int ans=0;
//     for (int i = 0; i < size; i++)
//     {
//         ans=ans^arr[i];
//     }
//     cout<< ans;
    
// }
int main() {
    int arr[] = {4, 2, 5, 2, 3, 5, 1, 6, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printUniqueValues(arr, size);
    
    
    return 0;
}
