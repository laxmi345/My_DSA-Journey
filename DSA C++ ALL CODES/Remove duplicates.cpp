#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    int n = nums.size();

    if(n <= 2)
        return n;

    int i = 2;

    for(int j = 2; j < n; j++) {

        if(nums[j] != nums[i-2]) {
            nums[i] = nums[j];
            i++;
        }

    }

    return i;
}

int main() {

    vector<int> nums = {1,1,1,2,2,3};

    int k = removeDuplicates(nums);

    cout << "k = " << k << endl;

    cout << "Array: ";

    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
