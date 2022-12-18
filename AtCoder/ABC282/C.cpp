#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    string S;
    cin >> N >> S;
    
    int dqNum = 0;
    for(int i = 0; i < N; i++){
        if(S.at(i) == '"'){
            dqNum++;
        }
        
        if(S.at(i) == ',' && dqNum % 2 == 0){
            S.at(i) = '.';
        }
        cout << S.at(i);
    }
    
    cout << endl;
}
