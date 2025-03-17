#include <iostream>
using namespace std;

int main() {
    int arr[] = {11, 12, 45, 1, 54, 6};
    int smallest = __INT_MAX__; // Correct spelling

    int largest=__WINT_MIN__;
    int index = -1;
    // Finding the smallest element
    for (int i = 0; i < 6; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // finding the largest element
    for (int i = 0; i < 6; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            index=i;
        }
    }

    cout << "Smallest element: " << smallest <<"Index" << index << endl;
    cout << "Largest element: " << largest << endl;
    return 0;
}
