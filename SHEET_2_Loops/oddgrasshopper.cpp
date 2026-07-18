#include<iostream>
using namespace std;
int main(){
long long t,n,x;
cin>>t;
while(t--){
    cin>>x;
    cin>>n;
    int a=n%4;
 if(x%2!=0){
if(a==1) cout<<x+n<<endl;
if (a==2) cout<<x-1<<endl;
if (a==3) cout<<x-n-1<<endl;
if(a==0) cout<<x<<endl;
 }
else {
  if(a==1) cout<<x-n<<endl;
if (a==2) cout<<x+1<<endl;
if (a==3) cout<<x+n+1<<endl;
if(a==0) cout<<x<<endl;
}
}
return 0;
}