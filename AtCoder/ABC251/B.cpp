#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int N, W;
    int A[301];
    cin >> N >> W;
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    set<int> ans;
    
    for(int i = 0; i < N; i++){
        if(A[i] <= W){
            ans.insert(A[i]);
        }
    }
    
    if(N >= 2){
        for(int i = 0; i < N-1; i++){
            for(int j = i+1; j < N; j++){
                if(A[i] + A[j] <= W){
                    ans.insert(A[i] + A[j]);
                }
            }
        }
    }
    
    if(N >= 3){
        for(int i = 0; i < N-2; i++){
            for(int j = i+1; j < N-1; j++){
                for(int k = j+1; k < N; k++){
                    if(A[i] + A[j] + A[k] <= W){
                        ans.insert(A[i] + A[j] + A[k]);
                    }
                }
            }
        }
    }
    
    cout << ans.size() << endl;

    
}
