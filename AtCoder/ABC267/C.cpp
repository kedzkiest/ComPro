#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    
    vector<int> A(n);
    vector<int> B(n);
    for(int i = 0; i < n; i++){
        cin >> A.at(i);
    }
    
    B = A;
    
    long long removed = 0;
    for(int i = 0; i < m; i++){
        removed += A.at(0);
        A.erase(A.begin());
        A.push_back(0);
    }
    
    
    vector<int> C(n);
    for(int i = 0; i < n; i++){
        C.at(i) = A.at(i) - B.at(i);
    }
    
    
    vector<int> D(n);
    long long sum = 0;
    for(int i = 0; i < n; i++){
        D.at(i) = sum;
        sum += C.at(i);
    }
    D.push_back(0);
    
    
    for(int i = 0; i < m; i++){
        D.erase(D.end()-1);
    }
    
    
    for(int i = 0; i < D.size(); i++){
        D.at(i) += removed;
    }
}
