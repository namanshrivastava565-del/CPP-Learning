#include<iostream>
using namespace std;
int main(){
double i,n,a;

    cin>>a;
while(a--){
cin>>n;

for(i=1;n>=10;++i){
n=n/10;}

for(int j=1;j<=i;++j){
    int x=n;
    cout<<x%10<<" ";
    n=n*10;
}
cout<<endl;
}
return 0;
}