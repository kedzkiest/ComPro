#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin >> S;
    
    if(S.length() != 8){
        cout << "No" << endl;
        return 0;
    }
    
    bool ans = true;
    
    for(int i = 0; i < S.length(); i++){
        if(i == 0 || i == S.length()-1){
            if(S[i] < 'A' || S[i] > 'Z') ans = false;
        }
        else if(i == 1){
            if(S[i] < '1' || S[i] > '9') ans = false;
        }
        else{
            if(S[i] < '0' || S[i] > '9') ans = false;
        }
    }
    
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
