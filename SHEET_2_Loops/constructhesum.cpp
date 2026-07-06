#include<iostream>
using namespace std;
int main(){
long long t,n,s;
 long long x=0;
bool y=false;
cin>>t;

while(t--){
 cin>>n>>s;
 long long start=min(n,s);

 if(((n*(n+1))/2<s)) cout<<"-1";

 else
  for(long long i=start;i>0;i--){

     if((x+i)<=s){
      x=x+i;
      cout<<i<<" ";
     }
        if(x==s){
            break;
        }
    }
    cout<<endl;
 x=0;
}
return 0;
}




