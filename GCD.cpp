#include<iostream>
using namespace std;
int main(){

int a,b,c,i;
cin>>a>>b;
int x,y=INT_MIN;
c=min(a,b);
for(i=1;i*i<=c;++i){

  if(a%i==0&&b%i==0){
      x=max(x,i);
  }
    if((a%(c/i)==0)&&(b%(c/i)==0)){
        y=max(y,c/i);
    }

}
cout<<max(x,y);
return 0;
}










