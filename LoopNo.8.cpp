#include <iostream>
using namespace std;

int main()
{
    int N, a = 0, b = 1, Next;

    cout << "Input a Number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << b << " ";
        Next = a + b;
        a = b;
        b = Next;
    }
    return 0;
}