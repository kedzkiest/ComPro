#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, Q;
    cin >> N >> Q;
    
    set<pair<int, int>> follows;
    for(int i = 0; i < Q; i++){
        int T, A, B;
        cin >> T >> A >> B;
        
        if(T == 1){
            follows.insert(make_pair(A, B));
        }
        
        if(T == 2){
            follows.erase({A, B});
        }
        
        if(T == 3){
            cout << (follows.count({A, B}) && follows.count({B, A}) ? "Yes" : "No") << endl;
        }
    }
}
