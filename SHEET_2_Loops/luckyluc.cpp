#include<iostream>
using namespace std;
int main(){
    
long long a,b,c,i;
bool x,found=true;
cin>>a>>b;
if(a>b)swap(a,b);

/*optimise it through 
    4  7
  44   47
  74   77
  444   447 */
for(;a<=b;a++){
  x=true;
    c=a;
   
   for(;c>0;){
       if(c%10!=4&&c%10!=7){
            x=false;
             break;
        }
      c=c/10;
    }
      if(x==true){
         cout<<a<<" ";
          found = false;
        }

}
if(found==true){cout<<"-1";}
return 0;
}