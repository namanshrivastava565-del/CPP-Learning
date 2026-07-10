#include<iostream>
using namespace std;
int main(){
    int n,x;
    int a=0,b=0,c=0;
    cin>>n>>x;
    n=n%6;
    if(x==0)a=1;
    else if(x==1)b=1;
    else c=1;

    for(int i=n;i>0;i--){
        if(i%2==1){
       swap(a,b);
        }
        if(i%2==0) {swap(b,c);}
    }
    if(a){cout<<0;}
    if(b) {cout<<1;}
    if(c) {cout<<2;}
    return 0;
}