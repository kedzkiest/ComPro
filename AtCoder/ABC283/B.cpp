#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N; 
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    
    int Q;
    cin >> Q;
    
    int mode;
    for(int i = 0; i < Q; i++){
        cin >> mode;
        
        if(mode == 1){
            int k, x;
            cin >> k >> x;
            A.at(k-1) = x;
        }
        
        if(mode == 2){
            int k;
            cin >> k;
            cout << A.at(k-1) << endl;
        }
    }
}
