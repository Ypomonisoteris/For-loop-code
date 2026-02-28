#include <iostream>
using namespace std;

int main() {
    int N, M;

    cout << "Input starting Number (N): ";
    cin >> N;
    cout << "Input ending Number (M): ";
    cin >> M;

    for (int i = N; i <= M; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    return 0;
}