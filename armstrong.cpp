#include <iostream>
using namespace std;

int main() {
    int n, original, remainder, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Negative numbers are not Armstrong numbers.";
    } 
    else {
        original = n;

        while (n > 0) {
            remainder = n % 10;
            sum += remainder * remainder * remainder;
            n /= 10;
        }

        // Special case for 0
        if (original == 0)
            sum = 0;

        if (sum == original)
            cout << original << " is an Armstrong number.";
        else
            cout << original << " is not an Armstrong number.";
    }

    return 0;
}
