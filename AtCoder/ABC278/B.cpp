#include <bits/stdc++.h>
using namespace std;

bool isEasyToMisJudge(int H, int M){
    string stringH = to_string(H);
    if(stringH.length() == 1) stringH = '0' + stringH;
    string stringM = to_string(M);
    if(stringM.length() == 1) stringM = '0' + stringM;
    
    string tmp = stringH;
    stringH[1] = stringM[0];
    stringM[0] = tmp[1];
    
    int newH = stoi(stringH);
    int newM = stoi(stringM);
    if(newH >= 0 && newH <= 23 && newM >= 0 && newM <= 59){
        return true;
    }
    
    return false;
}

int main(void){
    int H, M;
    cin >> H >> M;
    
    while(!isEasyToMisJudge(H, M)){
        if(M == 59){
            if(H == 23){
                H = 0;
            }
            else{
                H++;
            }
            M = 0;
        }
        else{
            M++;
        }
    }
    
    cout << H << " " << M << endl;
}
