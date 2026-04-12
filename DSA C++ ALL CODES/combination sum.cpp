#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& combination, int start) {
        if (target == 0) {
            res.push_back(combination);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) break; 

            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], res, combination, i);
            combination.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        vector<vector<int>> res;
        vector<int> combination;
        backtrack(candidates, target, res, combination, 0);
        return res;
    }
};

// --- YEH MAIN FUNCTION ZAROORI HAI RUN KARNE KE LIYE ---
int main() {
    Solution sol;
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = sol.combinationSum(candidates, target);

    // Result ke size tak loop chalao
for (int i = 0; i < result.size(); i++) {
    cout << "[ ";
    
    // Ab us particular combination ke andar ke numbers print karo
    for (int j = 0; j < result[i].size(); j++) {
        cout << result[i][j] << " ";
    }
    
    cout << "]" << endl;
}

    return 0;
}   
