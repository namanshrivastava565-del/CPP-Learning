#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number till u want prime no's" << endl;

    long long n;
    cin >> n;
    bool x=true;

    for (int b=2;b<=n; ++b) {
         x=true;

        for(int i=2;i*i<=b;++i){
            if(b % i== 0){
              x=false;
            }
        }
        
       if(x==true){
        cout<<b;
       }
       
    }

    return 0;
}