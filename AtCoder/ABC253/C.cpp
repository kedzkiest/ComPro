#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int Q;
    cin >> Q;
    
    int inst, x, c;
    multiset<int> S;
    
    for(int i = 0; i < Q; i++){
        cin >> inst;
        
        if(inst == 1){
            cin >> x;
            S.insert(x);
        }
        
        if(inst == 2){
            cin >> x >> c;
            
            while(S.find(x) != S.end()){
                S.erase(S.find(x));
                c--;
                if(c == 0) break;
            }
        }
        
        if(inst == 3){
            cout << *S.rbegin() - *S.begin() << endl;
        }
    }
}
