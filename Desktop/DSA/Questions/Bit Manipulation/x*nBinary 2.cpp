#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long binForm = n;
    if (binForm < 0) {
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1;
    while (binForm > 0) {
        if (binForm % 2 == 1) { // If odd, multiply result by x
            ans *= x;
        }
        x *= x;  // Square the base
        binForm /= 2;  // Reduce the exponent
    }
    return ans;
}

int main() {
    cout << "2^10 = " << myPow(2, 10) << endl;  // 1024
    cout << "2^-2 = " << myPow(2, -2) << endl;  // 0.25
    cout << "3^0 = " << myPow(3, 0) << endl;    // 1
    return 0;
}
