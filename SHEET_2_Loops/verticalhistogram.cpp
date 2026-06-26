#include<iostream>
using namespace std;
int main(){

int a,b,c,n,i;
cin>>a>>b>>c;
n=max(a,b);
n=max(n,c);
for (int i = 1;i<= n; ++i) {
    if (i <= (n - a)) cout << "  ";
    else cout << "* ";

    if (i <= (n - b)) cout << "  ";
    else cout << "* ";
    
    if (i <= (n - c)) cout << "  ";
    else cout << "* ";
    
    cout << endl;
}

return 0;
}











