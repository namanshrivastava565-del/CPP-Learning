#include<iostream>
using namespace std;
int main(){
    int t,a,b;
bool x=true;
cin>>t;
 int bhak[t];
for(int i=0;i<t;i++){
    cin>>a;
   bhak[i]=a;
}
cin>>b;
for(int i=0;i<t;i++){
    if(bhak[i]==b){
     x=false;
     cout<<i;
     break;
    }
}
if(x==true){
    cout<<"-1";
}
return 0;
}