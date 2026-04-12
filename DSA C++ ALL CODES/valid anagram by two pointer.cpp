#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t)
{
    if(s.length() != t.length())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    int i = 0;
    int j = 0;

    while(i < s.length() && j < t.length())
    {
        if(s[i] != t[j])
            return false;

        i++;
        j++;
    }

    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";

    if(isAnagram(s,t))
        cout << "True";
    else
        cout << "False";

    return 0;
}
