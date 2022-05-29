#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int H, W;
    cin >> H >> W;
    char grid[H][W];
    
    int firstI, firstJ, secondI, secondJ;
    bool first = true;
    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'o' && first){
                firstI = i;
                firstJ = j;
                first = false;
            }
            else if(grid[i][j] == 'o' && !first){
                secondI = i;
                secondJ = j;
            }
        }
    }
    
    cout << abs(firstI - secondI) + abs(firstJ - secondJ) << endl;
    
    
}