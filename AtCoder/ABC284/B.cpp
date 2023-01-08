#include <bits/stdc++.h>
using namespace std;
int main(void){
    int T;
    cin >> T;
    
    int cnt = 0;
    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        cnt = 0;
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            if(a % 2 != 0) cnt++;
        }
        
        cout << cnt << endl;
    }
}
