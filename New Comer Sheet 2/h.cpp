#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 2) {
        cout << "YES" << endl;
    } else if (n == 1 || (n % 2 == 0 && n > 2)) {
        cout << "NO" << endl;
    } else {
        bool is_prime = true;
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
