#include<iostream>
using namespace std;
int main(){
long long t,n,s;
bool x=false;
cin>>t;
while(t--){
 cin>>n>>s;
  for(int i=1;i<n;i++){
     if(s-i>0&&s-i<n){
          cout<<i<<" "<<s-i<<endl;
          x=true;
         break;
        }
    }
  if(x==false){
    cout<<"-1";
   }
   x=false;
}
return 0;
}




