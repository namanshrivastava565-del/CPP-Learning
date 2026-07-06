#include<iostream>
using namespace std;
int main(){
    int n,m;
    int r,q=0;
    bool x=true;
    cin>>n>>m;
    char bhak [n];
    char shak [m];
    cin>>bhak;
    cin>>shak;
    
while(true){
 for(int i=0;i<m;i++){
    if(bhak[i]==shak[i]){
        int j=i;
      for(;j<m;j++){
           x=true;
          if(bhak[j]==shak[j]){
             x=false; 
            } 
            else break;
        }
    }
  }

  for(int z=n;z<2*n;z++){
    bhak[z]=bhak[r];
    r++;
  }
q=q+1;
}
cout<<q-1;
return 0;
}