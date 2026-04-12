#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;

    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {

            int sum = 0;   // ? reset for every subarray

            for(int i = st; i <= end; i++) {
                sum += arr[i];   // ? add elements
            }

            cout << sum << " ";
        }
    }

    return 0;
}
