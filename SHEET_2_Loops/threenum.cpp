#include<iostream>
using namespace std;
int main(){
int s,k;
int a= 0;
cin>>k>>s;
 if(k>s){
    k=s;
 }
for(int x=0;x<=k;x++){
     
    for(int y=0;y<=k;y++){
         
        for(int z=0;z<=k;z++){
            
            if(x+y+z==s){
                a++;
            }
        }
    }

}
cout<<a;
return 0;
}