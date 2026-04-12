#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part) {

    while(s.find(part) != string::npos) {
        int pos = s.find(part);   // leftmost occurrence
        s.erase(pos, part.length()); 
    }

    return s;
}

int main() {

    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeOccurrences(s, part);

}
