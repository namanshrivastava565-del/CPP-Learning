#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a;
cout<<"Enter the binary number to be converted into number"<<endl;
cin>>a;
 int z=0;
 int f=0;
 int k;
 int e;
for(;a>0;a/=10){
k=pow(2,f);
z+=(k*(a%10));
f=f+1;
}
cout<<z;
return 0;
}