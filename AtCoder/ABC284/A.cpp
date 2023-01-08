#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N; 
    cin >> N;
    vector<string> seq(N);
    
    for(int i = 0; i < N; i++){
        cin >> seq.at(i);
    }
    
    for(int i = N-1; i >= 0; i--){
        cout << seq.at(i) << endl;
    }
}
