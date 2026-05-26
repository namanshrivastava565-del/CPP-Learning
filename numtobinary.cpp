#include<iostream>
using namespace std;
int main(){
int a;
cout<<"ENTER THE NUMBER YOU WANT TO CONVERT INTO BINARY"<<endl;
cin>>a;
int z=0;
for(int b=1;a>0;b=b*10){
z=z+((a%2)*b);
a=a/2;
}
cout<<z;

return 0;
}