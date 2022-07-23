#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    
    vector<vector<char>> result(n, vector<char> (n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> result.at(i).at(j);
        }
    }
    
    bool isWrong = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(result.at(i).at(j) == 'W' && result.at(j).at(i) != 'L') isWrong = true;
            if(result.at(i).at(j) == 'L' && result.at(j).at(i) != 'W') isWrong = true;
            if(result.at(i).at(j) == 'D' && result.at(j).at(i) != 'D') isWrong = true;
        }
    }
    
    if(isWrong){
        cout << "incorrect" << endl;
    }
    else{
        cout << "correct" << endl;
    }
}
