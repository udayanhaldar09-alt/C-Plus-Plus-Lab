#include <iostream>
#include <string>
using namespace std;

bool isNumberPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return original == reverse;
}

bool isStringPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right])
            return false;

        left++;
        right--;
    }

    return true;
}

int main() {
    int num;
    string str;

    cout << "Enter a number: ";
    cin >> num;

    if (isNumberPalindrome(num))
        cout << "Number is a palindrome." << endl;
    else
        cout << "Number is not a palindrome." << endl;

    cout << "Enter a string: ";
    cin >> str;

    if (isStringPalindrome(str))
        cout << "String is a palindrome." << endl;
    else
        cout << "String is not a palindrome." << endl;

    return 0;
}
