#include<iostream>
using namespace std;
int main(){

int a,b,n; 
cin>>a>>b;
if(a>b)swap(a,b);
n=INT_MAX;
for(int i=1;i<n;i++){
b=b*i;
if(b%a==0){
    n=b;
    break;
}
b=b/i;
}
cout<<n;
return 0;
}













