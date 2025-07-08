#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X >= Y) {
            cout << 0 << endl;
        } else {
            long long sum = 0;
            for (int i = X + 1; i < Y; i += 2) {
                sum += i;
            }
            cout << sum << endl;
        }
    }

    return 0;
}

