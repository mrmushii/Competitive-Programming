#include<iostream>

using namespace std;
int main(){

int n,a,sum=0,temp ;
cin>>n;
temp=n;

while(n>0){

    a=n%10;
    sum=(sum*10)+a;
    n=n/10;



}
    if(temp==sum){
        cout<<sum<<endl<<"YES"<<endl;
    }else
        cout<<sum<<endl<<"NO"<<endl;




return 0;
}
