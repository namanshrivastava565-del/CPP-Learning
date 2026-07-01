/*#include<iostream>
using namespace std;
int main(){
int n,a;
cin>>n;
for(int j=1;j<=n;j++){
    if(j%2==0)a=0;
    else a=1;
    for(int i=1;i<=j;i++){
        cout<<a<<" ";

        if(a==0)a=1;
        else a=0;
    }
     cout<<endl;
}
   
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    char imp ='c';
    char impi = 'f';
string s;
cin>>s;
if(s[0]==imp||s[3]==impi){
    cout<<"YES";
}
else cout<<"NO";
return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main() {
long long x,y,t,a;
cin>>t;
while(t--){
   cin>>x>>y;
   int z=x;
   if(x%10!=0){
       x=x/10;
       x=x+1;
   }
    else x=x/10;
    int p=(z-y)*x;
    cout<<p<<endl;
}
return 0;
}
