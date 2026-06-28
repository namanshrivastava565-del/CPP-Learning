#include<iostream>
using namespace std;
int main(){
cout<<"num"<<" "<<"="<<" ";
int n;
cin>>n;
bool x=false;

for(int i=0;i*i<=n;i++){
    if(i*i==n){
        cout<<"true";
        x=true;
        break;
    }
}
if(x==false){
    cout<<"false";
}
return 0;
}