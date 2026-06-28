#include<iostream>
using namespace std;
int main(){
int n,a;
int b=0;
int c=INT_MIN;
cin>>n;
while(n--){
   cin>>a;
while(a%2==0){
    a=a/2;
    b=b+1;
}
c=max(c,b);
b=0;
}
cout<<c;

return 0;
}