#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i,j;

i=n/4;
if(i%2==0){
   j=n%4;
}
else j=3-(n%4);

cout<<i<<" "<<j;
 return 0;
}





//ALTERNATE METHOD
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
bool x=false;
int a=0;
for(int i=0;i<6;i++){
   if(i%2==0){
    for(int j=0;j<4;j++){
         if(n==a){
            cout<<i<<" "<<j;
            x=true;
            break;
         }  
       a=a+1;
      }
   }
   else {for(int j=3;j>=0;j--){
           if(n==a){
              cout<<i<<" "<<j;
              x=true;
             break;
            }  
            a=a+1;
         }
   }
    if(x==true){
      break;
    }
}
return 0;
}
 