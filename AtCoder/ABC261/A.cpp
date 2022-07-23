#include <bits/stdc++.h>
using namespace std;
int main(void){
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    int right, left;
    if(l2 < l1){
        left = l1;
    }
    else{
        left = l2;
    }
    
    if(r2 > r1){
        right = r1;
    }
    else{
        right = r2;
    }
    
    int ans = right - left;
    if(ans < 0){
        cout << "0" << endl;
    }
    else{
        cout << ans << endl;
    }
}
