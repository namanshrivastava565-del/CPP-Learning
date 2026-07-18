#include<iostream>
using namespace std;
int main(){
int t,n;
int cnt=0;
int cntt=0;
cin>>t;
while(t--){
    cin>>n;
     while(n%2==0){
     n /= 2;
     cnt++;
     }
    while(n%3==0){
     n /= 3;
     cntt++;
     }
     if(n==1&&cntt>=cnt){
        cout<<(cntt-cnt)+cntt<<endl;
     }
     else cout<<"-1"<<endl;
     cnt=0;
     cntt=0;
}
return 0;
}

