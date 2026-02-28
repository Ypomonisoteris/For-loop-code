#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Input a Number: ";
    cin >> N;

    for (int counter = 1; counter <= N; counter++) {
        if (counter % 2 == 0) {
            cout << counter << " ";
        }
    }
    return 0;
}