#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    while(t--){
       int n,k;cin>>n>>k;
       string s;cin>>s;
       int cnt = 0;

// first window
for(int i = 0; i < k; i++)
    if(s[i] == 'W') cnt++;

int ans = cnt;

for(int i = k; i < n; i++) {
    if(s[i-k] == 'W') cnt--;
    if(s[i] == 'W') cnt++;

    ans = min(ans, cnt);
}

cout << ans << '\n';
    }
