#include <bits/stdc++.h>
using namespace std;
int main(void){
    int X, Y, Z;
    cin >> X >> Y >> Z;
    
    int ansDist = 0;
    
    if(X > 0){
        if(Y < 0 || Y > X){
            ansDist = X;
        }
        else if(Y > 0 && Y < X){
            if(Y < Z){
                ansDist = -1;
            }
            else{
                ansDist = abs(Z) + (X - Z);
            }
        }
    }
    else if(X < 0){
        if(Y > 0 || Y < X){
            ansDist = abs(X);
        }
        else if(Y < 0 && Y > X){
            if(Y > Z){
                ansDist = -1;
            }
            else{
                ansDist = abs(Z) + abs(X - Z);
            }
        }
    }
    
    cout << ansDist << endl;
}
