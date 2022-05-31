#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    
    map<pair<string, int>, int> originalPair;
    set<string> submission;
    
    int tmpScore;
    string tmpString;
    
    for(int i = 1; i <= N; i++){
        cin  >> tmpString >> tmpScore;
        if(submission.find(tmpString) == submission.end()){
            submission.insert(tmpString);
            originalPair.insert(make_pair(make_pair(tmpString, tmpScore), i));
        }
    }
    
    int maxScore = -1;
    int ans = -1;
    
    for(auto i = originalPair.begin(); i != originalPair.end(); i++){
        if(i->first.second > maxScore){
            maxScore = i->first.second;
            ans = i->second;
        }
    }
    
    cout << ans;
}
