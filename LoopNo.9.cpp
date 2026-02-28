#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Input a Number: ";
    cin >> N;

    // i = 2 (starting divisor)
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            cout << "Not Prime";
            return 0; // exit if found a divisor
        }
    }
    cout << "Prime";
    return 0; // if no divisor found, it’s prime
}