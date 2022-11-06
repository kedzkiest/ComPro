#include <bits/stdc++.h>
using namespace std;
int main(void){
    int M, N;
    cin >> N >> M;
    vector<vector<int>> road(N);
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        road.at(a-1).push_back(b);
        road.at(b-1).push_back(a);
    }
    
    for(int i = 0; i < N; i++){
        sort(road.at(i).begin(), road.at(i).end());
    }
    
    
    for(int i = 0; i < N; i++){
        int tmp = road.at(i).size();
        if(tmp == 0){
            cout << tmp << endl;
            continue;
        }
        cout << tmp << " ";
        
        for(int j = 0; j < tmp; j++){
            cout << road.at(i).at(j);
            if(j != tmp - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}
