#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
bool x=false;
string c =s;
  if(s[0]>90){
    s[0]-=32;
  }
    for(int i=1;i<s.length();i++){
        if(s[i]<=90&&s[i]>=62){
         s[i]+=32;
        }
        else{
         x=true;
         break;
        }
    }
  if(x==false)cout<<s;
  else cout<<c;
return 0;
}