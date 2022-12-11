#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s, t;
    cin >> s >> t;
    
    string::size_type pos;
    pos = s.find(t);
    if(pos != string::npos){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
