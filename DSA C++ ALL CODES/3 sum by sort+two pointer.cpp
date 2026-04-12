#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    sort(nums.begin(), nums.end());

    int n = nums.size();

    for(int i = 0; i < n-2; i++)
    {
        int l = i+1, r = n-1;

        while(l < r)
        {
            int sum = nums[i] + nums[l] + nums[r];

            if(sum == 0)
            {
                cout << nums[i] << " " << nums[l] << " " << nums[r] << endl;
                l++;
                r--;
            }
            else if(sum < 0)
                l++;
            else
                r--;
        }
    }

    return 0;
}
