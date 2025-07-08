#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N, M;
        cin >> N >> M;

        if (N <= 0 || M <= 0) {
            break;
        }

        int sum = 0;
        if(M>N){

        for (int i = N; i <= M; ++i) {
            cout << i << " ";
            sum += i;

        }
        }else{

        for (int i = M; i <= N; ++i) {
            cout << i << " ";
            sum += i;


        }
        }

        cout << "sum = " << sum << endl;
    }


return 0;
}
