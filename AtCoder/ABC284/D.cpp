#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    int cnt = 0;
    for(int i = 0; i < T; i++){
        long long n;
        cin >> n;
        
        for (long long j = 2; j <= sqrt(n); j++) {
            if (n % j == 0) {
                
                long long rem = n / j;
                
                // found p
                if(rem % j == 0){
                    cout << j << " " << rem / j << endl;
                    break;
                }
                
                // found q
                long long a = (long long)floor(sqrt(rem));
                if(a*a == rem){
                    cout << a << " " << j << endl;
                    break;
                }
            }
        }
    }
}