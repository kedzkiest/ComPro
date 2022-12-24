#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin >> S;
    
    int ans = 0;
    for(int i = S.length()-1; i >= 0; i--){
        if(i > 0 && S[i] == '0' && S[i-1] == '0'){
            ans++;
            i--;
            continue;
        }
        
        ans++;
    }
    
    cout << ans << endl;
}