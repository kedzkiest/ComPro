#include <bits/stdc++.h>
using namespace std;
int main(void){
    string S, T;
    
    vector<char> S_duplicatedChar;
    vector<char> T_duplicatedChar;
    
    cin >> S >> T;
    
    S_duplicatedChar.push_back(S.at(0));
    T_duplicatedChar.push_back(T.at(0));
    
    for(int i = 1; i < S.length(); i++){
        if(S.at(i) == S.at(i-1)){
            if(S_duplicatedChar.size() > 0){
                if(S_duplicatedChar.at(S_duplicatedChar.size()-1) == S.at(i)){
                    S_duplicatedChar.push_back('*');
                    continue;
                }
                else if(S_duplicatedChar.at(S_duplicatedChar.size()-1) == '*'){
                    continue;
                }
            }
            
            S_duplicatedChar.push_back(S.at(i));
        }
        S_duplicatedChar.push_back(S.at(i));
    }
    
    for(int i = 1; i < T.length(); i++){
        if(T.at(i) == T.at(i-1)){
            if(T_duplicatedChar.size() > 0){
                if(T_duplicatedChar.at(T_duplicatedChar.size()-1) == T.at(i)){
                    T_duplicatedChar.push_back('*');
                    continue;
                }
                else if(T_duplicatedChar.at(T_duplicatedChar.size()-1) == '*'){
                    continue;
                }
            }
            
            T_duplicatedChar.push_back(T.at(i));
        }
        T_duplicatedChar.push_back(T.at(i));
    }
    
    /*
    for(int i = 0; i < S_duplicatedChar.size(); i++){
        cout << S_duplicatedChar.at(i) << " ";
    }
    cout << endl;
    for(int i = 0; i < T_duplicatedChar.size(); i++){
        cout << T_duplicatedChar.at(i) << " ";
    }
    cout << endl;
    */
    
    bool flag = true;
    
    if(S_duplicatedChar.size() == T_duplicatedChar.size()){
        for(int i = 0; i < T_duplicatedChar.size(); i++){
            if(S_duplicatedChar.at(i) != T_duplicatedChar.at(i)){
                flag = false;
                break;
            }
        }
    }
    else if(S.size() > T.size()){
        flag = false;
    }
    else{
        flag = false;
    }
    
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
