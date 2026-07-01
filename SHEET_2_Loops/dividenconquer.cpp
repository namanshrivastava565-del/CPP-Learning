#include<iostream>
using namespace std;
int main(){
 long long x,y,t;
    cin>>t;
    bool p =false;
    while(t--){
        cin>>x>>y;
        for(int i =1;i<=x;i++){
            double z=x/i;
          if(z==y){
              cout<<"YES"<<endl;
              p=true;
              break;
          }
        }
        if(p==false){
            cout<<"NO"<<endl;
        }
     p=false;
    }
    
return 0;
}
