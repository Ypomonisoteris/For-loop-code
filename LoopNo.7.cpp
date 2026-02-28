#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, digit;

    cout << "Input a Number: ";
    cin >> N;

    for (; N > 0; N /= 10) {
        digit = N % 10;
        sum += digit;
    }
    cout << "Sum of digits = " << sum;
    return 0;
}