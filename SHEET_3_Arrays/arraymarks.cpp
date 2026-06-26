#include<iostream>
using namespace std;
int main()
{
int x[5];
cout<<"ENTER THE TEST MARKS OF 5 STUDENT"<<endl;
for(int i=0;i<5;++i){
cin>>x[i];
}
 int y=0;
 
for(int i=0;i<5;++i){
y+=x[i];
}
y=y/5;
cout<<"AVERAGE TEST MARKS "<<y<<endl;
int l=x[0];
for(int i=0;i<5;++i){
if(l<x[i]){
    l=x[i];
}
}
cout<<"Highest marks in test of provided students "<<l;
return 0;
}