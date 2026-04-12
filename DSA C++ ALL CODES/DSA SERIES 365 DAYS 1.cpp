#include <iostream>
#include <vector>
#include <algorithm> // sort function ke liye

using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    
    // 1. Sort the array: Complexity O(n log n)
    sort(nums.begin(), nums.end()); // 'Sort' ka 'S' small hoga
    
    int freq = 1;
    int ans = nums[0];

    // Agar array mein sirf ek hi element hai
    if (n == 1) return nums[0];

    for (int i = 1; i < n; i++) { // 'i < n, i++' ki jagah 'i < n; i++'
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        // 2. Check if frequency is more than n/2
        if (freq > n / 2) {
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {3, 2, 3};
    cout << "Majority element: " << majorityElement(nums) << endl;
    return 0; // 'return 0' main ke andar hoga
}
