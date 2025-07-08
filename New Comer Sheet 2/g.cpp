#include <bits/stdc++.h>

using namespace std;

int main(){

int t,n;
long long fac=1;
cin>>t;
for(int i=1;i<=t;i++){
    fac=1;
    cin>>n;
    for(int j=1;j<=n;j++){
        fac*=j;
    }
    cout<<fac<<endl;
}




return 0;
}
