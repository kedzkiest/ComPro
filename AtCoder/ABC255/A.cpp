#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int R, C;
    cin >> R >> C;
    
    int A[2][2];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> A[i][j];
        }
    }
    
    cout << A[R-1][C-1] << endl;
}
