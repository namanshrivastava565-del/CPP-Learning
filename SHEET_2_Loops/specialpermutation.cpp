#include<iostream>
using namespace std;
int main(){
int n,t;
cin>>t;
while(t--){
    cin>>n;
    int x[n];
   for(int i=n/2;i<n;i++){
          x[i]=i+1;
           cout<<x[i]<<" ";
    }

       for(int i=0;i<n/2;i++){
          x[i]=i+1;
          cout<<x[i]<<" ";
        }
      
}

return 0;
}





