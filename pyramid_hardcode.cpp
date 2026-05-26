#include<iostream>
using namespace std;
int main(){
cout<<"Enter the height of pyramid u want"<<endl;
int a;
cin>>a;
int b;
int f=1;
int c;
while(a>0)
{ 
    c=a-1;
for(c=c;c>0;--c){
cout<<" ";
}
 for(b=1;b<=f;++b){
cout<<"*";
 }
 cout<<endl;
 f=f+2;
a=a-1;
}
return 0;
}
