#include<iostream>
using namespace std;
int main(){
cout<<"ENTER YOUR NUMBER TO BE REVERSED"<<endl;
int a;
int b=1;
cin>>a;
for(b=1;a>0;b*=10){
int x= a/b;
if(x>10){
    cout<<x%10;
}
if(x!=0&&x<10)
{cout<<x;
}

if(x==0){
    break;

}
}
return 0;
}