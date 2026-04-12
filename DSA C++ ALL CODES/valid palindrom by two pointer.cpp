#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while(left < right) {

        // non-alphanumeric skip
        while(left < right && !isalnum(s[left])) left++;
        while(left < right && !isalnum(s[right])) right--;

        // compare characters
        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    if(isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
