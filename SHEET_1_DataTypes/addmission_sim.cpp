#include<iostream>
using namespace std;
int main()
{
    int P;
    int E;
cout<<"Enter your percentage "<<endl;
cin>>P;
if (P<0||P>100){
    cout<<"Invalid Percentage"<<endl;
    return 0;
}
cout<<"Enter your extracurricular marks"<<endl;
cin>>E;
if (E<0||E>10){
    cout<<"Invalid Extracurricular marks"<<endl;
    return 0;
}7
if ((P>=90)&&(P<=100)){
    if (E>8&&E<=10){
        cout<<"Congrats you got full scholarship"<<endl;
    }
}
else if ((P>=80&&P<=100)||((P>70&&P<=100)&&(E>9&&E<=10))){
    cout<<"Congrats you got Partial scholarship"<<endl;
}
else {
    cout<<"STANDARD ADMISSION"<<endl;

}
return 0;
}