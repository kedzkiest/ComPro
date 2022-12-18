#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, M;
    cin >> N >> M;
    
    vector<vector<char>> issue(N, vector<char> (M));
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> issue.at(i).at(j);
        }
    }
    
    int ans = 0;
    bool canSolve;
    
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){
            canSolve = true;
            for(int k = 0; k < M; k++){
                if(issue.at(i).at(k) == 'x' && issue.at(j).at(k) == 'x') canSolve = false;
            }
            
            if(canSolve) ans++;
        }
    }
    
    cout << ans << endl;
}
