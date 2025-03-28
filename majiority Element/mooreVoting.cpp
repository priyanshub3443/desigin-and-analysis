#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) {
    int candidate = 0, count = 0;

    // Step 1: Find the potential majority candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Step 2: Verify if the candidate is the actual majority element
    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    return (count > nums.size() / 2) ? candidate : -1;
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
