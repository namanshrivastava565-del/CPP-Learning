#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number to check if it is prime or not" << endl;

    long long a;
    cin >> a;
    int b;

    int z =0;
    bool x =false;
    for (b= 2;b <a; ++b) {
        if(a % b == 0){
          cout << "it is not a prime number" << endl;
        x = true;

          break;}
        }
if (x ==false){
    cout<<"it is a prime number"<<endl;

}
    return 0;
}