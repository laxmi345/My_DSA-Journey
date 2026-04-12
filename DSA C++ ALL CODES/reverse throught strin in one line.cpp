#include<iostream>
#include<string>
#include<algorithm>   // reverse() ke liye

using namespace std;

int main() {
    string str = "apna college";

    // reverse string
    reverse(str.begin(), str.end());  // iterators

    cout << str << endl;

    return 0;
}
