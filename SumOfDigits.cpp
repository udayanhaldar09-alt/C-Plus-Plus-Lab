#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    // Convert negative number to positive
    n = abs(n);

    // Calculate sum of digits
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of digits = " << sum;

    return 0;
}
