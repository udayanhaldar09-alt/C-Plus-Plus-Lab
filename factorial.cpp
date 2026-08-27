#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter an integer: ";
    cin >> n;

    // Case 1: Negative integer
    if (n < 0) {
        cout << "Factorial is not defined for negative integers.";
    }

    // Case 2: Zero
    else if (n == 0) {
        cout << "Factorial of 0 = 1";
    }

    // Case 3: Positive integer
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}
