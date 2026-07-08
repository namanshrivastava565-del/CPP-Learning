#include<iostream>
#include<climits>
using namespace std;

bool isgood (long long n){
   int count [10]=0;
   int uniquenum = 0;
    
   while(n>0){
    long long lastdigit=n%10;
   if(count[lastdigit]==0){
  uniquenum++;
  count[lastdigit]==1;
   }
    n/=10; 
   }
    return uniquenum<=2;
}
int main(){
    int i;
cin>>i;
cout<<isgood(i);

return 0;
}



/*int main(){
 long long t,x,a,b,s,l;
bool p=false;
 cin>>t;
 while(t--){
cin>>x;
for(long long i=2;i<INT_MAX;i++){
    long long z=x*i;
    a=z%10;
   long long s=z;
   while(z>0){
    l=z%10;
    if(l!=a){
        b=l;
        break;
    }
    z=z/10;

   }
   while(s>0){
    s=s%10;
    if(s!=a&&s!=b){
        p=true;
        break;
    }
    s=s/10;
   }

    if(p==false){
        cout<<i<<endl;
        break;
    }
    p=false;
}
}
return 0;
}*/

