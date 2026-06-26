 #include<iostream>
 using namespace std;
 int main(){
int a;
int s= 115;
int f=0;
cout<<"WELCOME TO \"GUESS THE lucky NUM\" GAME"<<endl;
cout<<"if u are closer to the number, temp. would get \"HOT\" and if farther \"COLD\""<<endl;
cout<<"kindly enter your 1st GUESS"<<endl;
cin>>a;
while(a!=s)
{
    if (a-s<10&&a-s>3||s-a<10&&s-a>3){
    cout<<"WARM"<<endl;
}
if(a-s<=3&&a-s>0||s-a<=3&&s-a>0) {
    cout<<"BOILING HOT"<<endl;
}
if(a-s>20||s-a>20){
    cout<<"FREEZING"<<endl;
}
f=f+1;
cin>>a;
if(f==10){
    cout<<"you have attempted 10 times"<<endl;
}
if(f==20){
    cout<<"you have attempted 20 times, game will stop at 25 attempt"<<endl;
}
if(f==25){
    cout<<"you have attempted 25 times,\"THE END\""<<endl;
    break;
}
}

if(a==s){
    cout<<"HURRAY, \"WINNER\""<<endl;
}
return 0;
}

