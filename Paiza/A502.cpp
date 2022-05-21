#include <bits/stdc++.h>
using namespace std;

void minusA(int a, int b, int c, int N);
void minusB(int a, int b, int c, int N);

bool reachable = false;
bool lastFound = false;
int cnt = 0;

int main(void){
    // Your code here!
    int N, A, B;
    cin >> N >> A >> B;
    
    for(int i = 1; i < N; i++){
        reachable = false;
        
        minusA(i, A, B, N);
        minusB(i, A, B, N);
    }
    
    if(lastFound){
        cout << N - cnt - 2 << endl;
    }
    else{
        cout << N - cnt - 1 << endl;
    }

}

void minusA(int i, int A, int B, int N){
    if(reachable) return;
    
    if(i - A > 0){
        minusA(i - A, A, B, N);
        minusB(i - A, A, B, N);
    }
    else if(i - A == 0){
        if(i - A == N) lastFound = true;
        reachable = true;
        cnt++;
        return;
    }
    else{
        return;
    }
}

void minusB(int i, int A, int B, int N){
    if(reachable) return;
    
    if(i - B > 0){
        minusA(i - B, A, B, N);
        minusB(i - B, A, B, N);
    }
    else if(i - B == 0){
        if(i - B == N) lastFound = true;
        reachable = true;
        cnt++;
        return;
    }
    else{
        return;
    }
}
