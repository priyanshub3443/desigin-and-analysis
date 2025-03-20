#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Generate all subarrays
    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            // Print subarray from index st to end
            for (int i = st; i <= end; i++) {  // Fixed loop condition
                cout << arr[i] << " ";
            }
            cout<<" ";
        }
        cout << endl; // Move to new line for each subarray
    }

    return 0;
}
