#include <bits/stdc++.h>
using namespace std;
int main(void){
    int H, W;
    cin >> H >> W;
    
    char fig1[H][W];
    char fig2[H][W];
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> fig1[i][j];
        }
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> fig2[i][j];
        }
    }
    
    multiset<vector<char>> set1, set2;
    vector<char> tmp;
    for(int i = 0; i < W; i++){
        for(int j = 0; j < H; j++){
            tmp.push_back(fig1[j][i]);
        }
        set1.insert(tmp);
        tmp.clear();
    }
    for(int i = 0; i < W; i++){
        for(int j = 0; j < H; j++){
            tmp.push_back(fig2[j][i]);
        }
        set2.insert(tmp);
        tmp.clear();
    }
    
    if(set1 == set2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
