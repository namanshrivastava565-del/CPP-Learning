#include<iostream>
using namespace std;
int main(){
cout<<"ENTER YOUR NUMBER TO BE REVERSED"<<endl;
int a;
int b=1;
cin>>a;
int x=a;
int rev=0;
for(b=10;x>0;b*=10){
 rev=rev*10+(x%10);
 x=a/b;
}
cout<<rev<<endl;
if(a==rev){cout<<"PALINDROME";}
else {cout<<"Not a palindrome";}

return 0;
}