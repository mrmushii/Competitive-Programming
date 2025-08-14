#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
      cin>>v[i];
    }
    vector<int> c;
    c= v;
    sort(c.begin(), c.end());

    if(c==v || k>1){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
}