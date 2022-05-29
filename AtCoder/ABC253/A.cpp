#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int A[3];
    cin >> A[0] >> A[1] >> A[2];
    int b = A[1];
    sort(A, A+3);
    if(A[1] == b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}