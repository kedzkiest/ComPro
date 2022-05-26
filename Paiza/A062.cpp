#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int N, L;
    cin >> N >> L;
    
    int fet[101][9];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < L; j++){
            cin >> fet[i][j];
        }
    }
    
    if(L == 1){
        cout << 1 << endl;
        return 0;
    }
    
    set<string> bitPattern;
    string tmpBit;
    
    for(int i = 2; i <= L; i++){
        for(int j = 0; j < N; j++){
            tmpBit = "";
            
            for(int k = 0; k < i; k++){
                tmpBit += fet[j][k];
            }
            bitPattern.insert(tmpBit);
        }
        
        if(bitPattern.size() == N){
            cout << i << endl;
            break;
        }
        else{
            bitPattern.clear();
        }
    }
}