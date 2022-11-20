#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, K;
    cin >> N >> K;
    list<int> A;
    
    for(int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    
    for(int i = 0; i < K; i++){
        A.pop_front();
        A.push_back(0);
    }
    
    for(int i = 0; i < N; i++){
        cout << A.front();
        A.pop_front();
        if(i != N-1) cout << " ";
    }
}
