#include<iostream>
using namespace std;
int main(){
   
string s;
char z ='z';
char n ='n';
int p;
cin>>p;
cin>>s;
for(int i=0;i<p;i++){
 if(s[i]==n){
        cout<<"1"<<" ";
    }
}
for(int i=0;i<p;i++){
    if(s[i]==z){
        cout<<"0"<<" ";
    }
}

return 0;
}