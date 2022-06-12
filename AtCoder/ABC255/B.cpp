#include <bits/stdc++.h>
using namespace std;

double calcDist(int x1, int x2, int y1, int y2){
    int xDist, yDist;
    
    xDist = x2 - x1;
    yDist = y2 - y1;
    
    return sqrt(pow(xDist,2) + pow(yDist,2));
}

int main(void){
    // Your code here!
    int N, K;
    cin >> N >> K;
    
    int A[1000];
    for(int i = 0; i < K; i++){
        cin >> A[i];
    }
    
    int X[1000], Y[1000];
    for(int i = 0; i < N; i++){
        cin >> X[i] >> Y[i];
    }
    
    set<double> nearLight;
    double dist;
    double minDist;
    
    for(int i = 0; i < N; i++){
        minDist = 2000000000;
        for(int j = 0; j < K; j++){
            dist = calcDist(X[i], X[A[j]-1], Y[i], Y[A[j]-1]);

            if(dist < minDist){
                minDist = dist;
            }
        }
        nearLight.insert(minDist);
    }
    
    cout << fixed << setprecision(12) << *nearLight.rbegin() << endl;
}
