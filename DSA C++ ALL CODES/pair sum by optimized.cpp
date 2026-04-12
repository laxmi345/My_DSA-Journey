#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(const vector<int>& nums, int target) {
    vector<int> ans;

    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int pairSum = nums[i] + nums[j];

        if (pairSum > target) {
            j--;
        }
        else if (pairSum < target) {
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;  // return empty if not found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);

    if (!ans.empty())
        cout << ans[0] << " , " << ans[1] << endl;
    else
        cout << "," << endl;

    return 0;
}
