#include<iostream>
using namespace std;
int main(){
    int* z=new int;
*z=45;
    
cout<<*z<<endl;
cout<<z<<endl;
delete z;
return 0;
}




