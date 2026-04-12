#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Helper function ko private rakhna achhi practice hai
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& combination, int start) {
        if (target == 0) {
            res.push_back(combination);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            // Optimization: Agar current bada hai, toh aage ke sab bade honge
            if (candidates[i] > target) break; 

            combination.push_back(candidates[i]);
            // i pass kiya taaki same element reuse ho sake
            backtrack(candidates, target - candidates[i], res, combination, i);
            combination.pop_back(); // Backtrack step
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        vector<vector<int>> res;
        vector<int> combination;
        backtrack(candidates, target, res, combination, 0);
        return res;
    }
}; // Class ke baad semicolon zaroori hai
    