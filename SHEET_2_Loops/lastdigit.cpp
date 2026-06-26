#include<iostream>
using namespace std;
int main()
{ 
int a;
int b;
cout<<"enter the number you want to add their last digit"<<endl;
cin>>a;
cin>>b;
int z= a+b;
int f=1;
while(true){
 f=f*10;
 if(z%f>0&&z%f<10){
    cout<<z%f;
    break;
 }
}
 return 0;
}