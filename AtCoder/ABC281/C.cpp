#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long N, T;
    cin >> N >> T;
    
    vector<long long> A(N);
    long long timeSum = 0;
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
        timeSum += A.at(i);
    }
    
    if(timeSum < T){
        long long mul = T / timeSum;
        T -= timeSum * mul;
    }
    
    for(int i = 0; i < N; i++){
        if(A[i] < T){
            T -= A[i];
        }
        else{
            cout << i+1 << " " << T << endl;
            break;
        }
    }
}
