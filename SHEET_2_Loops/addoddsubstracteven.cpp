#include<iostream>
using namespace std;
int main(){
int t,a,b,x;
cin>>t;
while(t--){
    cin>>a>>b;

    if(a%2==0&&b%2==0||a%2!=0&&b%2!=0){
        if(b>a){
           x=2;
        }
       else x=1;
    }
    else if(b>a) x=1;
    else if(a>b) x=2;
  
    if(a==b) x=0;

   cout<<x<<endl;
}
return 0;
}