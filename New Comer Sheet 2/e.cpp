#include <iostream>

using namespace std;
int main(){
int n,Max=0,temp,a;

cin>>n;
for(int i=0;i<n;i++){
    cin>>a;

    if(Max>a){
        Max=Max;

    }else if(a>Max){

        Max=a;
        temp=Max;
    }


}cout<<Max<<endl;







return 0;
}

