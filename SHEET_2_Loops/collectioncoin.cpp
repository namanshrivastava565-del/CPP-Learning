#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
int a,b,c,n;
int t;

cin>>t;
while(t--){
cin>>a>>b>>c>>n;
int x=(a+b+c+n)/3;
if((a+b+c+n)%3==0&&x>=a&&x>=b&&x>=c){
    cout<<"YES"<<" ";
}
else cout<<"NO"<<" ";

}

return 0;
}
