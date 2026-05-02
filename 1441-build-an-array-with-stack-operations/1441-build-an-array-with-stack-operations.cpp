class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int i = 1; // stream pointer

        for (int j = 0; j < target.size(); j++) {
            while (i < target[j]) {
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }

            // when i == target[j]
            ans.push_back("Push");
            i++;
        }

        return ans;
    }
};