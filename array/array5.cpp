#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main() {
    int arr[] = {11, 12, 45, 1, 54, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1, largestIndex = -1;

    // Finding the smallest and largest elements in one loop
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
        if (arr[i] > largest) {
            largest = arr[i];
            largestIndex = i;
        }
    }

    cout << "Smallest element: " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest element: " << largest << " at index " << largestIndex << endl;

    // Swapping smallest and largest elements in the array
    swap(arr[smallestIndex], arr[largestIndex]);

    // Printing the modified array
    cout << "Array after swapping smallest and largest elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
