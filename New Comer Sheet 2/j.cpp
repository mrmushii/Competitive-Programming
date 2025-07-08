#include<iostream>

using namespace std;
int main(){

int n;
cin>>n;
if(n==2){
    cout<<2;

}else if( n>2){
for(int i=2;i<=n;i++){

        for(int j=2;j<n;j++){

            if(i%j-1==0){
                break;
            }else
            cout<<i<<" "<<endl;
        }



}
}
return 0;
}

