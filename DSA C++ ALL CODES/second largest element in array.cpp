#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {5,3,9,2,8};

    int largest = nums[0];
    int secondLargest = -1;

    for(int i = 1; i < nums.size(); i++) {

        if(nums[i] > largest) {

            secondLargest = largest;
            largest = nums[i];

        }
        else if(nums[i] > secondLargest && nums[i] != largest) {

            secondLargest = nums[i];

        }

    }

    cout << "Second Largest Element: " << secondLargest;

    return 0;
}
