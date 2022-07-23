#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    
    map<string, int> s;
    string tmp;
    
    for(int i = 0; i < n; i++){
        cin >> tmp;
        
        decltype(s)::iterator it = s.find(tmp);
        
        if(it == s.end()){
            s.insert(make_pair(tmp, 0));
            cout << tmp << endl;
        }
        else{
            (it->second)++;
            cout << tmp << "(" << it->second << ")" << endl;
        }
    }
}
