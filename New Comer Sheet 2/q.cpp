#include <iostream>
using namespace std;

int main() {
    int T;
    long long N;
    cin >> T;

   for(int i=0;i<T;i++){

        cin >> N;
        if(N==0){

            cout<<0;
        }

        while (N != 0) {
            cout << N % 10 << " ";
            N /= 10;
        }

        cout << endl;
    }

return 0;
}
