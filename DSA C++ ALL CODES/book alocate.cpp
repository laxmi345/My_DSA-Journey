#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &books, int students, int mid) {
    int studentCount = 1;
    int pages = 0;

    for(int i = 0; i < books.size(); i++) {
        if(books[i] > mid) return false;

        if(pages + books[i] <= mid) {
            pages += books[i];
        } else {
            studentCount++;
            pages = books[i];

            if(studentCount > students)
                return false;
        }
    }
    return true;
}

int allocateBooks(vector<int>& books, int students) {
    int low = 0, high = 0;

    for(int i = 0; i < books.size(); i++) {
        high += books[i];
        low = max(low, books[i]);
    }

    int ans = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(isPossible(books, students, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> books = {10, 20, 30, 40};
    int students = 2;

    cout << "Minimum pages: " << allocateBooks(books, students);
    return 0;
}
