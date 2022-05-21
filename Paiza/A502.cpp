#include <bits/stdc++.h>
using namespace std;

void proceedA(int N, int A, int B, int total);
void proceedB(int N, int A, int B, int total);

set<int> reachable;

bool lastFound = false;

int main(void){
    // Your code here!
    int N, A, B;
    cin >> N >> A >> B;
    
    proceedA(N, A, B, 0);
    proceedB(N, A, B, 0);
    
    if(lastFound){
        cout << N - reachable.size() << endl;
    }
    else{
        cout << N - reachable.size() - 1 << endl;
    }
}

void proceedA(int N, int A, int B, int total){
    total += A;
    
    if(total > N) return;
    if(total == N) lastFound = true;
    
    if(reachable.contains(total)) return;
    
    reachable.insert(total);

    proceedA(N, A, B, total);
    proceedB(N, A, B, total);
}

void proceedB(int N, int A, int B, int total){
    total += B;
    
    if(total > N) return;
    if(total == N) lastFound = true;
    
    if(reachable.contains(total)) return;
    
    reachable.insert(total);

    proceedA(N, A, B, total);
    proceedB(N, A, B, total);
}