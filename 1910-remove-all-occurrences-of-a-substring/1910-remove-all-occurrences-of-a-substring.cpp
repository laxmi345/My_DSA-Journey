class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans = "";

        for (char ch : s) {
            ans += ch;

            // check karo last part match ho raha hai kya
            if (ans.size() >= part.size() &&
                ans.substr(ans.size() - part.size()) == part) {

                ans.erase(ans.size() - part.size());
            }
        }

        return ans;
    }
};