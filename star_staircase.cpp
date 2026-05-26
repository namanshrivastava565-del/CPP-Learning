#include<iostream>
using namespace std;
int main(){
    int c=-1;
int f=1;
int g=-1;
int a;
cout<<"Enter the number of star staircase u want"<<endl;
cin>>a;
for(f=1;f<=a;++f){
cout<<" "<<endl;
cout<<"*";
++c;
if(f==1){
    g++;
}
else{
    g=1;
}
while(g>0&&g<=c){
    g++;
    cout<<"*";
}
}
return 0;
}