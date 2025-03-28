#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) {
    int n = nums.size();

    for (int val : nums) {
        int freq = 0;
        for (int el : nums) {
            if (el == val) {
                freq++;
            }
        }
        if (freq > n / 2) {
            return val;  // Majority element found
        }
    }

    return -1;  // No majority element found
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = majorityElement(nums);

    if (result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element Found" << endl;
    }

    return 0;
}
