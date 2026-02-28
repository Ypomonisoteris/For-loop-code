#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, R;
    string Bin = ""; // empty string to store binary result

    cout << "Input a Number: ";
    cin >> N;

    for (; N > 0; N /= 2) { // loop until N becomes 0
        R = N % 2; // get remainder (either 0 or 1)
        Bin = to_string(R) + Bin; // prepend remainder to binary string
    }
    cout << "Binary = " << Bin;
    return 0;
}