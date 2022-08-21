#include <bits/stdc++.h>
using namespace std;

int main(void){
    int H, W;
    cin >> H >> W;
    
    vector<vector<char>> grid(H, vector<char> (W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> grid.at(i).at(j);
        }
    }
    
    int i = 0, j = 0;
    bool canMove = true;
    bool isLoop = false;
    set<pair<int, int>> visited;
    pair<int, int> tmp;
    
    while(1){
        switch(grid.at(i).at(j)){
            case 'U':
                if(i == 0){
                    canMove = false;
                }
                else{
                    i--;
                }
                break;
            case 'D':
                if(i == H-1){
                    canMove = false;
                }
                else{
                    i++;
                }
                break;
            case 'L':
                if(j == 0){
                    canMove = false;
                }
                else{
                    j--;
                }
                break;
            case 'R':
                if(j == W-1){
                    canMove = false;
                }
                else{
                    j++;
                }
                break;
        }
        
        if(!canMove) break;
        
        tmp = make_pair(i, j);
        if(visited.find(tmp) != visited.end()){
            isLoop = true;
            break;
        }
        else{
            visited.insert(make_pair(i, j));
        }
    }
    
    if(isLoop){
        cout << "-1" << endl;
    }
    else{
        cout << i + 1 << " " << j + 1 << endl;
    }
}