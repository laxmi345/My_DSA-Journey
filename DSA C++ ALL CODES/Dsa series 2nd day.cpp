#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to find missing and repeated values
vector<int> findMissingAndRepeated(vector<vector<int>>& grid) {
    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int totalElements = n * n;
    
    int a = 0; // Repeating
    long long actualSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val = grid[i][j];
            actualSum += val;
            
            if (s.find(val) != s.end()) {
                a = val; // Repeating number mil gaya
            }
            s.insert(val);
        }
    }

    long long expectedSum = (long long)totalElements * (totalElements + 1) / 2;
    int b = expectedSum - (actualSum - a); // Missing number logic

    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

// --- YE RAHA MAIN FUNCTION ---
int main() {
    // Example: 2x2 grid
    // 2 repeat ho raha hai, 4 missing hai
    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    vector<int> result = findMissingAndRepeated(grid);

    cout << "Repeating: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;

    return 0;
}
