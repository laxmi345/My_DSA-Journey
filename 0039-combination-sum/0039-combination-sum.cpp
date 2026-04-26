class Solution {
public:
    void solve(int idx, vector<int>& arr, int target,
               vector<int>& temp, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {

            if (arr[i] > target) continue;

            temp.push_back(arr[i]);

            solve(i, arr, target - arr[i], temp, ans);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, candidates, target, temp, ans);
        return ans;
    }
};