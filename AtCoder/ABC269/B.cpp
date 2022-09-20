#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    vector<vector<char>> input(10, vector<char> (10));
    vector<set<char>> line(10);
    vector<set<char>> row(10);
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> input.at(i).at(j);
        }
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            line.at(i).insert(input.at(i).at(j));
        }
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            row.at(i).insert(input.at(j).at(i));
        }
    }
    
    int l1, l2, r1, r2;
    bool isCalledOnce = false;
    for(int i = 0; i < 10; i++){
        if(line.at(i).find('#') != line.at(i).end()){
            if(!isCalledOnce){
                isCalledOnce = true;
                l1 = i+1;
            }
            l2 = i+1;
        }
    }
    
    isCalledOnce = false;
    for(int i = 0; i < 10; i++){
        if(row.at(i).find('#') != row.at(i).end()){
            if(!isCalledOnce){
                isCalledOnce = true;
                r1 = i+1;
            }
            r2 = i+1;
        }
    }
    
    cout << l1 << " " << l2 << endl << r1 << " " << r2 << endl;
}
