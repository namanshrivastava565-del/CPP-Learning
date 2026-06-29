#include<iostream>
using namespace std;
int main(){
int s,k;
int a= 0;
cin>>k>>s;
 if(k>s){
    k=s;}
 
for(int x=0;x<=k;x++){
     
    for(int y=0;y<=k;y++){
         int z=s-(x+y);
       if(z<=k&&z>=0){
                a++;
        }
    }
}

cout<<a;
return 0;
}






