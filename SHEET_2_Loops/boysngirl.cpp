#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int z=max(n,m);
int p=z;
for(int i=1;i<=n+m;i++){
    if(z==n&&p>0){
        cout<<"B";
        p=p-1;
        if(m>0){
            cout<<"G";
            m=m-1;
        }
    }
    if(z==m&&p>0){
        cout<<"G";
        p=p-1;
        if(n>0){
            cout<<"B";
            n=n-1;
        }
    }
    }
    return 0;
}

