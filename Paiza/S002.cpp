#include <bits/stdc++.h>
using namespace std;

char pos[1001][1001];
bool visited[1001][1001];
int distFromStart[1001][1001];

class Location{
    public:
    int x;
    int y;
    int dist;
};

queue<Location> searchQueue;

void searchUp(Location l);
void searchRight(Location l, int M);
void searchDown(Location l, int N);
void searchLeft(Location l);

void searchUp(Location l){
    if(l.y-1 < 0) return;
    
    l.y--;
    Location currentLocation = l;
    
    if(visited[currentLocation.y][currentLocation.x] || pos[currentLocation.y][currentLocation.x] == '1'){
        return;
    }
    else{
        visited[currentLocation.y][currentLocation.x] = true;
        distFromStart[currentLocation.y][currentLocation.x] = l.dist+1;
        currentLocation.dist++;
        searchQueue.push(currentLocation);
    }
}

void searchRight(Location l, int M){
    if(l.x+1 >= M) return;
    
    l.x++;
    Location currentLocation = l;
    
    if(visited[currentLocation.y][currentLocation.x] || pos[currentLocation.y][currentLocation.x] == '1'){
        return;
    }
    else{
        visited[currentLocation.y][currentLocation.x] = true;
        distFromStart[currentLocation.y][currentLocation.x] = l.dist+1;
        currentLocation.dist++;
        searchQueue.push(currentLocation);
    }
}

void searchDown(Location l, int N){
    if(l.y+1 >= N) return;
    
    l.y++;
    Location currentLocation = l;
    
    if(visited[currentLocation.y][currentLocation.x] || pos[currentLocation.y][currentLocation.x] == '1'){
        return;
    }
    else{
        visited[currentLocation.y][currentLocation.x] = true;
        distFromStart[currentLocation.y][currentLocation.x] = l.dist+1;
        currentLocation.dist++;
        searchQueue.push(currentLocation);
    }
}

void searchLeft(Location l){
    if(l.x-1 < 0) return;
    
    l.x--;
    Location currentLocation = l;
    
    if(visited[currentLocation.y][currentLocation.x] || pos[currentLocation.y][currentLocation.x] == '1'){
        return;
    }
    else{
        visited[currentLocation.y][currentLocation.x] = true;
        distFromStart[currentLocation.y][currentLocation.x] = l.dist+1;
        currentLocation.dist++;
        searchQueue.push(currentLocation);
    }
}

int main(void){
    // Your code here!
    
    int M, N
    cin >> M >> N;
    
    int goalX;
    int goalY;
    int ans;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            visited[i][j] = false;
            distFromStart[i][j] = 1000000;
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> pos[i][j];
            if(pos[i][j] == 's'){
                Location l;
                l.x = j;
                l.y = i;
                l.dist = 0;
                searchQueue.push(l);
                visited[i][j] = true;
                distFromStart[i][j] = 0;
            }
            
            if(pos[i][j] == 'g'){
                goalX = j;
                goalY = i;
            }
        }
    }
    
    while(!searchQueue.empty()){
        Location currentLocation = searchQueue.front();
        searchQueue.pop();
        
        searchUp(currentLocation);
        searchRight(currentLocation, M);
        searchDown(currentLocation, N);
        searchLeft(currentLocation);
    }
    
    ans = distFromStart[goalY][goalX];
    if(ans == 1000000){
        cout << "Fail" << endl;
    }
    else{
        cout << ans << endl;
    }
    
    // cout << "distance from start" << endl;
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < N; j++){
    //         cout << distFromStart[i][j] << "\t";
    //     }
    //     cout << endl;
    // }
}
