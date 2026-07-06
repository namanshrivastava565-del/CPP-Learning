#include<iostream>
using namespace std;
int main(){

int n,p,t;
cin>>n;
p=4*(n-1)+1;
int y=0;
int x=0;

for(int i= 0;i<p;i++){
    
    for(int j=0;j<p;j++){

     if((i%2==0&&j>=x&&j<=p-1-x)||(j%2==0&&i>=y&&i<=p-1-y)){
        cout<<"* ";
     }
     
     else cout<<"  "; 
     
       if(j%2==0){
           if(j<p/2){y=y+2;}
                else y=y-2; 
        } 
    }
    if(i%2==0){ if(i<p/2){
                x=x+2;
                    }
                else x=x-2; }
    cout<<endl;
y=0;
}
return 0; 
}


