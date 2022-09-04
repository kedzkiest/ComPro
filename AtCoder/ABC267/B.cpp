#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;
    
    vector<set<char>> row(7);
    row.at(0).insert(s[6]);
    
    row.at(1).insert(s[3]);
    
    row.at(2).insert(s[1]);
    row.at(2).insert(s[7]);
    
    row.at(3).insert(s[0]);
    row.at(3).insert(s[4]);
    
    row.at(4).insert(s[2]);
    row.at(4).insert(s[8]);
    
    row.at(5).insert(s[5]);
    
    row.at(6).insert(s[9]);
    
    bool canbeSplit = false;
    for(int i = 0; i < 5; i++){
        for(int j = i+2; j < 7; j++){
            if(row.at(i).count('1') && row.at(j).count('1')){
                for(int k = i+1; k < j; k++){
                    if(row.at(k).count('0') == row.at(k).size()){
                        canbeSplit = true;
                        break;
                    }
                }
            }
            
            if(canbeSplit) break;
        }
        
        if(canbeSplit) break;
    }
    
    if(canbeSplit && s[0] == '0'){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
