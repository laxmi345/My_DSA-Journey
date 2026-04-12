#include<iostream>
#include<string> // string ko use krne ke liye 
#include<algorithm>   // reverse use krne ke liye 
using namespace std;

// Function
string reverseStr(string s, int k)  //forming function revrsestr
{
    int n = s.length();  //strng ki lenth s me store krege 

    for(int i = 0; i < n; i = i + 2*k) // ae 2k char me move krta hai 
    {
        if(i + k <= n) // ae check krta k charcter available yaa nhi means total lenth se kam char yaa nhi 
        {
            reverse(s.begin() + i, s.begin() + i + k); // string ke fisrt charcter reverse krti hai 
        }
        else
        {
            reverse(s.begin() + i, s.end()); //if k charc not avail reverse all 
        }
    }

    return s;
}

// Main Body
int main()
{
    string s = "abcdefg";
    int k = 2;

    string result = reverseStr(s, k);// call function 

    cout << result;

    return 0;
}
