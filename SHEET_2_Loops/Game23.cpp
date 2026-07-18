#include<iostream>
using namespace std;
int main(){
long long n,m;
cin>>n>>m;
int a=0;
int b=0;
int c=m%n;
int d=m/n;
n=m/n;
while(n%2==0){
    n=n/2;
  a++;
}
while(n%3==0){
    n=n/3;
    b++;
}
if(c!=0) cout<<"-1"<<endl;
else if(d==1) cout<<"0"<<endl;
else if(n==1) cout<<a+b<<endl;
else cout<<"-1"<<endl;
return 0; 
}