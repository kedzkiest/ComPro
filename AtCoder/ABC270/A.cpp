#include <bits/stdc++.h>
using namespace std;
int main(void){
    int A, B;
    cin >> A >> B;
    
    bool flag1 = true, flag2 = true, flag4 = true;
    
    if(A-4 < 0 && B-4 < 0){
        flag4 = false;
    }
    else if(A-4 < 0 && B-4 >= 0){
        B -= 4;
    }
    else if(A-4 >= 0 && B-4 < 0){
        A -= 4;
    }
    else{
        A -= 4;
        B -= 4;
    }
    
    if(A-2 < 0 && B-2 < 0){
        flag2 = false;
    }
    else if(A-2 < 0 && B-2 >= 0){
        B -= 2;
    }
    else if(A-2 >= 0 && B-2 < 0){
        A -= 2;
    }
    else{
        A -= 2;
        B -= 2;
    }
    
    if(A-1 < 0 && B-1 < 0){
        flag1 = false;
    }
    else if(A-1 < 0 && B-1 >= 0){
        B -= 1;
    }
    else if(A-1 >= 0 && B-1 < 0){
        A -= 1;
    }
    else{
        A -= 1;
        B -= 1;
    }
    
    int ans = 0;
    if(flag1) ans += 1;
    if(flag2) ans += 2;
    if(flag4) ans += 4;
    
    cout << ans << endl;
}
