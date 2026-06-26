#include<iostream>
using namespace std;
int main(){

int a,b,n,S;
cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a>>b;

      if(a>b){swap(a,b);}

      if(a%2==0){a=a+1;}
        else a=a+2;

      if(b%2==0){b=b-1;}
         else b=b-2;

S=(b-a+2)*(a+b);
cout<<S/4<<endl;
 
  }

return 0;
}















