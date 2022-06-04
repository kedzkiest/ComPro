#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int N;
    cin >> N;
    
    int result[30][30];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                result[i][j] = 1;
                cout << result[i][j];
            }
            else{
                result[i][j] = result[i-1][j-1] + result[i-1][j];
                cout << result[i][j];
            }
            
            if(j != i){
                cout << " ";
            }
        }
        cout << endl;
    }
}
