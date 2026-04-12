#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int val : nums) {
            ans ^= val;
        }

        return ans;
    }
};

int main() {
    Solution obj;   // object create

    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Single Number: " << obj.singleNumber(nums);

    return 0;
}

