#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    string s, ans;
    cin >> s;
    while(1){
        ans += s;
        if(ans.length() == 6)break;
    }
    
    cout << ans << endl;
}
