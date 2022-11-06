#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    
    vector<int> p(N);
    for(int i = 0; i < N; i++){
        cin >> p.at(i);
    }
    
    prev_permutation(p.begin(), p.end());
    for(int i = 0; i < N; i++){
        cout << p.at(i);
        if(i != N-1) cout << " ";
    }
    cout << endl;
    
    return 0;
}
