#include <iostream>
using namespace std;
int main(){

int x[6];
cout<<"Enter the number sequence u want to reverse"<<endl;
for(int i=0;i<6;++i){
cin>>x[i];
}
cout<<"Your unreversed number squence is-"<<endl;
for(int i=0;i<6;++i){
    cout<<x[i]<<" ,";
}
cout<<endl;
cout<<"Reversed Sequence is-"<<endl;

for(int i=5;i>=0;--i){
    cout<<x[i]<<" ,";
}
return 0;
}