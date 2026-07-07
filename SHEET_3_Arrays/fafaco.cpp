#include<iostream>
using namespace std;
int main(){

int cnt=0,n;
cin>>n;
for(int I=1;I<=n/2;I++){
    if((n-I)%I==0)
    cnt++;
}
cout<<cnt;
    return 0;

}