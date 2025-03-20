#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

// Kadane's Algorithm to find the Maximum Subarray Sum
int MaxSubArraySum(int arr[], int size) {
    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < size; i++) {
        currsum += arr[i];
        maxsum = max(currsum, maxsum);

        if (currsum < 0) {
            currsum = 0;
        }
    }

    return maxsum; // Return the final maximum sum after the loop
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = MaxSubArraySum(arr, size);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
