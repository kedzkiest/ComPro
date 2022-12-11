#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'v') ans++;
        if(s[i] == 'w') ans += 2;
    }
    
    cout << ans << endl;
}
