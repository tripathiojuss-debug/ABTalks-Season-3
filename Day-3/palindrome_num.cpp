#include <iostream>
using namespace std;
bool isPalindrome(long long int x) {
        if (x < 0) return false;
        long long int rev = 0, temp = x;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        return x == rev;
    }

int main() {

    long long int x;
    cout << "Enter number: ";
    cin >> x;

    if (isPalindrome(x)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}