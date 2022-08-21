#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long N, M, T;
    cin >> N >> M >> T;
    
    vector<long long> A(N-1);
    map<long long, long long> bonusRoom;
    
    for(int i = 0; i < N-1; i++){
        cin >> A.at(i);
    }
    
    int x, y;
    for(int i = 0; i < M; i++){
        cin >> x >> y;
        bonusRoom.insert(make_pair(x, y));
    }
    
    bool canReach = true;
    
    for(int i = 0; i < N - 1; i++){
        T -= A.at(i);
        if(T <= 0){
            canReach = false;
            break;
        }
        
        decltype(bonusRoom)::iterator it = bonusRoom.find(i+2);
        if(it != bonusRoom.end()){
            T += it->second;
        }
    }
    
    if(canReach){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}