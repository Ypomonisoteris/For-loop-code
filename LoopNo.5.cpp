#include <iostream>
using namespace std;

int main() {
    int N, M, sum = 0;

    cout << "Input starting Number (N): ";
    cin >> N;
    cout << "Input ending Number (M): ";
    cin >> M;

    for (int i = N; i <= M; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    cout << "Sum of all odd numbers from " << N << " to " << M << " is: " << sum;
    return 0;
}