#include <iostream>
using namespace std;

int factorialN(int n) {
    int fact = 1;   // initialization ????? ??

    for (int i = 1; i <= n; i++) {
        fact *= i;  // i ?? multiply ???? ??, 1 ?? ????
    }

    return fact;
}

int main() {
    cout << factorialN(4) << endl;
    cout << factorialN(5) << endl;
    return 0;
}

