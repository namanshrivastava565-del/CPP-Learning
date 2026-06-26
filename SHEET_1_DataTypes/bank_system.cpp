#include<iostream>
using namespace std;
int main()
{//check balance, withdrawal, deposit, exit,
    int b=1000;
    int w;
    int d;
    cout<<"Welcome to the bank"<<endl;
    cout<<"Press 1 to check balance"<<endl;
    cout<<"Press 2 to withdraw"<<endl;
    cout<<"Press 3 to deposit"<<endl;
    cout<<"Press 4 to exit"<<endl;
int x;
cin>>x;
if (x<1||x>4){
    cout<<"Invalid input"<<endl;
    return 0;
}
switch(x){
    case 1:
    cout<<"YOUR BALANCE IS "<<b<<endl;
    break;
    case 2 :cout << "Enter the amount you want to withdraw"<<endl;
    cin>>w;
    if (w>b){
        cout <<"Insufficient balance"<<endl;
        return 0;}
    if (w<0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    cout << " your new balance is "<<b-w<<endl;
    break;
    case 3: cout<<"Enter the amount you want to deposit"<<endl;
    cin>>d;
    if (d<0){
        cout<<"Invalid input"<<endl;
        return 0;}
    cout<<"Your new balance is "<<b+d<<endl;
    break;
    case 4 :cout<<"Thank you for using out services"<<endl;
    break;
    default: cout<<"Invalid input"<<endl;

} 
return 0;
}
