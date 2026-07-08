#include<iostream>
#include<climits>
using namespace std;

bool isgood (long long n){
   long long count [10]={0};
   int uniquenum = 0;
    
   while(n>0){
    long long lastdigit=n%10;
   if(count[lastdigit]==0){
  uniquenum++;
  count[lastdigit]=1;
   }
    n/=10; 
   }
    return uniquenum<=2;
}

int main() {
    long long x, t;
      cin >> t;
    while (t--) {
        cin >> x;

        long long base = 10; 
        while (true) {
            long long i = base + 1; 
            long long z = i*x;

            if (isgood(z)) {
                cout << i << endl;
                break;
            }
             base *= 10;
        }
    }
    return 0;
}
