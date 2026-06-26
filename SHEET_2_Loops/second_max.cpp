#include<iostream>
using namespace std;
int main(){
 int n;
    cin>>n;
    int x=INT_MIN;
    int y=0;
    int a,c;
    for(int i=0;i<n;i++){
        cin>>y; 
        if(y>=x){c=x;}
        else if(y>=a){c=y;}
        else{c=a;}
        a=min(x,y); 
        x=max(x,y);
    }

cout<<x<<endl;
cout<<c;
return 0;
}

/*#include<iostream>
using namespace std;
int main(){
 int n;
    cin>>n;
    int x=INT_MIN;
    int y=0;
    int a,b,c;
    for(int i=0;i<n;i++){
        b=min(x,y);
        cin>>y; 
        a=min(x,y); 
        c=max(a,b);
        x=max(x,y);
    }

cout<<x<<endl;
cout<<c;
return 0;
}*/

