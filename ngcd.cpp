#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,n;
cin>>n;
 int g=0;

for(int i=1;i<=n;++i){
cin>>a;
g=__gcd(g,a);
}

cout<<g;

return 0;
}