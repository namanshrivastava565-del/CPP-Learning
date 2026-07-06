#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
cout<<endl;
cout<<endl;

for(int i=0;i<2*n-1;i++){

    for(int j=0;j<2*n+1;j++){
      
    if(j>=0&&j<=n&&i+j<=2*i&&i+j<=2*n-2){
        cout<<"*";
    }
    else if(j>=n&&j<=2*n-1&&i+j>=2*n-1&&j-i>=1){
        cout<<"*";
    }
    else cout<<" ";
    }
cout<<endl;
}
return 0;
}