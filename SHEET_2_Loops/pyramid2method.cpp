#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int hzrepeat =9;
int vrepeat = 9;
int rows = 2*n;
 int cols =2*n+1;


for(int I=0;I<rows*vrepeat;I++){
     int i =I%rows;

    for(int J=0;J<cols*hzrepeat;J++){
            int j=J%cols;
            
             if((i+j>=n-1)&&(j-i<=n-1)&&(i-j<=n)&&(i+j<=(3*n-2))){
                cout<<"*";
              }
              else cout<<" ";
        
    }
 cout<<endl;
}
 
return 0;

}














