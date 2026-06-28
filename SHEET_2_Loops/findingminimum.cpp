#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,k;
cin>>n;
cin>>k;
int a;
int b=INT_MAX;
for(int i=1;i<=n;i++){
     
   cin>>a;
     b=min(b,a);

     if(i%k==0||i==n){
            cout<<b<<" ";
           b=INT_MAX;
        }  
}
return 0;
}
