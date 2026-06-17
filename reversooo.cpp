#include<iostream>
using namespace std;
int main(){
   
int a;
int b=1;
cin>>a;
for(b=1;a>0;b*=10){
int x= a/b;
if(x>10){
    if((x%10)!=0)
    cout<<x%10;
}
if(x<10){
cout<<x;
break;
}     
}
return 0;
}