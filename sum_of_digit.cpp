#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    n=190;

    cout << sumOfDigits(n);

    return 0;
}