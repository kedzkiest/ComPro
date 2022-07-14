#include <bits/stdc++.h>
using namespace std;

vector<pair<char, int>> Compress(string s);

int main(void){
    string S, T;
    cin >> S >> T;
    
    vector<pair<char, int>> compressedS, compressedT;
    compressedS = Compress(S);
    compressedT = Compress(T);
    
    /* to confirm compression
    for(int i = 0; i < compressedS.size(); i++){
        cout << "first = " << compressedS.at(i).first << ", second = " << compressedS.at(i).second << endl;
    }
    
    for(int i = 0; i < compressedT.size(); i++){
        cout << "first = " << compressedT.at(i).first << ", second = " << compressedT.at(i).second << endl;
    }
    */
    
    bool ans = true;
    
    // judge possible or not
    if(compressedS.size() != compressedT.size()){
        
    }
}

vector<pair<char, int>> Compress(string s){
    vector<pair<char, int>> ans;
    
    ans.push_back(make_pair(s[0], 1));
    
    for(int i = 1; i < s.size(); i++){
        if(s[i] == ans.at(ans.size()-1).first){
            ans.at(ans.size()-1).second++;
        }
        else{
            ans.push_back(make_pair(s[i], 1));
        }
    }
    
    return ans;
}
