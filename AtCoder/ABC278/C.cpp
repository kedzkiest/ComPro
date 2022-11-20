#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, Q;
    cin >> N >> Q;
    
    vector<set<int>> followList(N);
    for(int i = 0; i < Q; i++){
        int T, A, B;
        cin >> T >> A >> B;
        
        if(T == 1){
            followList.at(A-1).insert(B-1);
        }
        
        if(T == 2){
            followList.at(A-1).erase(B-1);
        }
        
        if(T == 3){
            if(followList.at(A-1).find(B-1) != followList.at(A-1).end() &&
               followList.at(B-1).find(A-1) != followList.at(B-1).end()){
                   cout << "Yes" << endl;
               }
               else{
                   cout << "No" << endl;
               }
        }
    }
}
