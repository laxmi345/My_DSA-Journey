#include <iostream>
using namespace std;

double myPow(double X, int n) {

    if (n == 0) return 1.0;

    if (X == 1) return 1.0;

    if (X == -1) {
        if (n % 2 == 0) return 1.0;
        else return -1.0;
    }

    long long binform = n;
    double ans = 1;

    if (binform < 0) {
        X = 1 / X;
        binform = -binform;
    }

    while (binform > 0) {

        if (binform % 2 == 1) {
            ans *= X;
        }

        X *= X;
        binform /= 2;
    }

    return ans;
}

int main() {
    double X;
    int n;

    cout << "Enter base: ";
    cin >> X;

    cout << "Enter power: ";
    cin >> n;

    cout << "Result = " << myPow(X, n);

    return 0;
}
