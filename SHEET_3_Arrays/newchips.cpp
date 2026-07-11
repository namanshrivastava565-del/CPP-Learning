#include<iostream>
using namespace std;
int main(){
 int n;
 int a=0;
 int b=0;
 cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
     if(arr[i]%2==0){
        a=a+1;
        }
        else b=b+1;
    }

cout<<min(a,b);
 return 0;
}











