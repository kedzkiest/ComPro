#include <bits/stdc++.h>
using namespace std;

int main(void){
    int x, y, n;
    cin >> x >> y >> n;
    
    int appleNum = 0;
    int totalCost = 0;
    
    double costY = y / 3.0;
    if(costY > x){
        totalCost = x * n;
        cout << totalCost << endl;
    }
    else{
        while(1){
            if(appleNum + 3 > n) break;
            appleNum += 3;
            
            totalCost += y;
        }
        
        if(n - appleNum > 0){
            totalCost += x * (n - appleNum);
        }
        
        cout << totalCost << endl;
    }
}