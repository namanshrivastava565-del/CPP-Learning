#include<iostream>
using namespace std;
int main(){
    int t,n;
    bool a=false;
    bool b=false;
    int c=0;
    bool d=false;
    cin>>t;
    while(t--){
      cin>>n;
      if(n==1||n==3){
        d=true;
      if(n==1) cout<<"0";
      if(n==3) cout<<"2";
      }
else{
    for(int i=2;i*i<=n;i++){
        if((n%3==0)&&(i%3==0||i%2==0&&((n/i)%3==0||(n/i)%2==0))){
          a=true;
        }
        else{
         a=false;
          break;
        }
    }
  if(a==true){
     while(true){
        if(n/6==1){
            b=true;
            c=c+1;
            break;
        }
        if(n%6==0){
            n=n/6;
            c=c+1;
        }
        else{ 
         n=n*2;
         c=c+1;
          }
      }
    }
}
  if(d==false){
    if(a==false) cout<<"-1";
    if(b==true) cout<<c;
    }
}
return 0;
}

