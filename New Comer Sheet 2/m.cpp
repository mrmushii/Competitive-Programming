#include<bits/stdc++.h>
using namespace std;
int main(){
int A, B;
    cin >> A >> B;

    int c = 0;

    for (int x = A; x <= B; ++x) {
        int num = x;
        int digit;
        while (num > 0) {
            digit = num % 10;
            if (digit != 4 && digit != 7) {
                break;
            }
            num /= 10;
        }

        if (num == 0) {
            if (c > 0) {
                cout << " ";
            }
            cout << x;
            ++ c;
        }
    }

    if (c == 0) {
        cout << -1;
    }

    return 0;
}
