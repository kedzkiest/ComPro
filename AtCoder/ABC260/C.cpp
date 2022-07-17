#include <bits/stdc++.h>
using namespace std;

void redExchange(vector<long long>& a, vector<long long>& b, int index);
void blueExchange(vector<long long>& a, vector<long long>& b, int index);

int X, Y;

int main(void){
    int N;
    cin >> N >> X >> Y;
    
    vector<long long> rJ(5);
    vector<long long> bJ(5);
    
    rJ.at(N-1) = 1;
    
    if(N == 1){
        cout << "0" << endl;
        return 0;
    }
    
    redExchange(rJ, bJ, N-1);
    
    for(int i = 0; i < 5; i++){
        cout << "rJ = " << rJ.at(i) << endl;
    }
    
    for(int i = 0; i < 5; i++){
        cout << "bJ = " << bJ.at(i) << endl;
    }
    cout << bJ.at(0);
}

void redExchange(vector<long long>& rJ, vector<long long>& bJ, int rI){
    if(rJ.at(rI) > 0){
        rJ.at(rI)--;
        rJ.at(rI-1)++;
        bJ.at(rI) += X;
        if(rI > 0){
            for(int i = 0; i < X; i++)
            blueExchange(rJ, bJ, rI);
        }
        
        if(rJ.at(rI) > 0 && rI > 1){
            redExchange(rJ, bJ, rI);
        }
        else if(rJ.at(rI) == 0 && rI > 1){
            redExchange(rJ, bJ, rI-1);
        }
    }
}

void blueExchange(vector<long long>& rJ, vector<long long>& bJ, int bI){
    if(bJ.at(bI) > 0){
        bJ.at(bI)--;
        rJ.at(bI-1)++;
        if(bI-1 > 0) redExchange(rJ, bJ, bI-1);
        
        bJ.at(bI-1) += Y;
        if(bJ.at(bI) > 0 && bI > 1){
            blueExchange(rJ, bJ, bI);
        }
        else if(bJ.at(bI) == 0 && bI > 1){
            blueExchange(rJ, bJ, bI-1);
        }
    }
}