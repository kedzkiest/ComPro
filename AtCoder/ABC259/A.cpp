#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;
    
    for(int i = 0; i <= N; i++){
        if(N-i == M){
            cout << T << endl;
            break;
        }
        else if(N-i > X){
            continue;
        }
        
        
        T -= D;
    }
}
