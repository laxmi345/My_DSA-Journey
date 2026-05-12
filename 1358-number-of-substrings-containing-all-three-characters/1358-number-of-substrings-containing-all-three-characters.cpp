class Solution {
public:

    int numberOfSubstrings(string s) {

        int left = 0;
        int count = 0;

        int a = 0, b = 0, c = 0;

        for(int right = 0; right < s.size(); right++) {

            // add character
            if(s[right] == 'a') a++;
            if(s[right] == 'b') b++;
            if(s[right] == 'c') c++;

            // while valid
            while(a > 0 && b > 0 && c > 0) {

                count += s.size() - right;

                // remove left character
                if(s[left] == 'a') a--;
                if(s[left] == 'b') b--;
                if(s[left] == 'c') c--;

                left++;
            }
        }

        return count;
    }
};