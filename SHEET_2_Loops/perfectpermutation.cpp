#include<iostream>
using namespace std;
int main(){
  int t,n,a;
  cin>>t;
  while(t--){
  cin>>n;
  if(n==1||n==0){
    cout<<"-1";
   }
  else
  {
  for(int i=n/2;i>0;i--){
    cout<<i<<" ";
  }
  for(int j=n;j>n/2;j--){
     cout<<j<<" ";
  }
}
 cout<<endl;
  }
  return 0;
}