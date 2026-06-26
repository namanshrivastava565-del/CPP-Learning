#include<iostream>
using namespace std;
int main(){
    int x[2][3];
    cout<<"Enter an matrix of 2,3 to be transpostion"<<endl;
for(int i=0;i<2;++i){
    for(int j=0;j<3;++j){
        cin>>x[i][j];
    }
}
cout<<"Matrix Provided by you"<<endl;
for(int i=0;i<2;++i){
    for(int j=0;j<3;++j){
        cout<<x[i][j];
        cout<<",";
    }
    cout<<endl;
}
cout<<"Matrix after Transposition"<<endl;
for(int i=0;i<3;++i){
    for(int j=0;j<2;++j){
        cout<<x[j][i];
        cout<<",";
    }
    cout<<endl;
}
return 0;

}