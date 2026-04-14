class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int maxlen = 0;
        
        unordered_map<char, int> mp;

        while (r < n) {
            if (mp.find(s[r]) != mp.end()) {
                if (l <= mp[s[r]]) {
                    l = mp[s[r]] + 1;
                }
            }

            mp[s[r]] = r;
            maxlen = max(maxlen, r - l + 1);

            r++;
        }

        return maxlen;
    }
};