#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& nums) {

    int maxElem = nums[0];

    for(int i = 1; i < nums.size(); i++) {

        if(nums[i] > maxElem) {
            maxElem = nums[i];
        }

    }

    return maxElem;
}

int main() {

    vector<int> nums = {5,3,9,2,8};

    int result = Maxelement(nums);

    cout << "Maximum Element: " << result;

    return 0;
}
