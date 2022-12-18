#include <bits/stdc++.h>
using namespace std;

int main(void){
    int K;
    cin >> K;
    
    int asc = 65;
    
    while(true){
        if(K == 0) break;
        cout << char(asc);
        asc++;
        K--;
    }
    cout << endl;
}
