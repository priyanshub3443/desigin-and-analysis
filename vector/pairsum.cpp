#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return {}; // Return empty vector if no pair is found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairSum(nums, target);

    if (!ans.empty()) {
        cout << "Indices: ";
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
