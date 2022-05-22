#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int N, K;
    int A[101];
    int sortedA[101];
    int B[101];
    
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        sortedA[i] = A[i];
    }
    sort(sortedA, sortedA+N);
    int max = sortedA[N-1];
    
    for(int i = 0; i < K; i++){
        cin >> B[i];
    }
    
    bool possible = false;
    
    set<int> likes;
    for(int i = 0; i < N; i++){
        if(A[i] == max){
            likes.insert(i+1);
        }
    }
    
    for(int i = 0; i < K; i++){
        if(likes.find(B[i]) != likes.end()){
            possible = true;
        }
    }
    
    if(possible){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}