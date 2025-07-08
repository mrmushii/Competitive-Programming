#include <bits/stdc++.h>

using namespace std;

int main(){

int N,x,even=0,odd=0,pos=0,neg=0;

cin>>N;
for(int i=0;i<N;i++){

    cin>>x;
    if(x%2==0||x==0){
      even++;
    }
    else if(x%2!=0){
        odd++;
    }
    if(x>0){
        pos++;

    }
    if(x<0){
        neg++;
    }

}
    cout << "Even: "<<even<<endl;
    cout << "Odd: "<<odd<<endl;
    cout << "Positive: "<<pos<<endl;
    cout << "Negative: "<<neg<<endl;


return 0;
}
