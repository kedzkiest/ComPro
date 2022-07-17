#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    
    map<char, int> m;
    
    for(int i = 0; i < 3; i++){
        if(m.find(s[i]) == m.end()){
            m.insert(make_pair(s[i], 1));
        }
        else{
            m.find(s[i])->second++;
        }
    }
    
    bool found = false;
    
    for(const auto& [key, value] : m){
        if(value == 1){
            cout << key << endl;
            found = true;
            break;
        }
    }
    
    if(!found) cout << "-1" << endl;
}
