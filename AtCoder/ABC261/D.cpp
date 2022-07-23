#include <bits/stdc++.h>
using namespace std;

void coinFlip(int result, int cnt);

long long money = 0;
long long maxMoney = 0;
int cnt = 0;
int totalFlip = 0;

int n, m;
vector<int> x;
map<int, int> cy;

int main(void){
    cin >> n >> m;
    
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a;
        x.push_back(a);
    }
    
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        cy.insert(make_pair(a, b));
    }
    
    coinFlip(0, 0);
    cnt = 0;
    totalFlip = 0;
    money = 0;
    coinFlip(1, 0);
    
    cout << maxMoney << endl;
}

void coinFlip(int result, int cnt){
    cout << "money: " << money << "maxMoney: " << maxMoney << endl;
    
    if(totalFlip == n){
        if(money > maxMoney){
            maxMoney = money;
        }
        return;
    }
    
    totalFlip++;
    
    // result0: front, result1: back
    if(result == 0){
        cnt++;
        money += x.at(totalFlip-1);
    }
    
    if(result == 1){
        cnt = 0;
    }
    
    decltype(cy)::iterator it = cy.find(cnt);
    if(it != cy.end()){
        money += it->second;
    }
    
    coinFlip(0, cnt);
    coinFlip(1, cnt);
}