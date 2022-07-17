#include <bits/stdc++.h>
using namespace std;

class Applicant{
    public:
    int index;
    int mScore;
    int eScore;
    bool passed;
};

bool mCmp(const Applicant &a, const Applicant &b){
    if(a.mScore == b.mScore){
        return a.index < b.index;
    }
    else{
        return a.mScore > b.mScore;
    }
}

bool eCmp(const Applicant &a, const Applicant &b){
    if(a.eScore == b.eScore){
        return a.index < b.index;
    }
    else{
        return a.eScore > b.eScore;
    }
}

bool iCmp(const Applicant &a, const Applicant &b){
    return a.index < b.index;
}

int main(void){
    int N, X, Y, Z;
    
    cin >> N >> X >> Y >> Z;
    vector<Applicant> a(N);
    vector<int> passedIndex;
    
    for(int i = 0; i < N; i++){
        cin >> a.at(i).mScore;
        a.at(i).index = i+1;
        a.at(i).passed = false;
    }
    
    for(int i = 0; i < N; i++){
        cin >> a.at(i).eScore;
    }
    
    
    sort(a.begin(), a.end(), mCmp);
    for(int i = 0; i < X; i++){
        passedIndex.push_back(a.at(0).index);
        a.erase(a.begin());
    }
    
    sort(a.begin(), a.end(), eCmp);
    for(int i = 0; i < Y; i++){
        passedIndex.push_back(a.at(0).index);
        a.erase(a.begin());
    }
    
    for(int i = 0; i < a.size(); i++){
        a.at(i).mScore += a.at(i).eScore;
    }
    
    sort(a.begin(), a.end(), mCmp);
    for(int i = 0; i < Z; i++){
        passedIndex.push_back(a.at(0).index);
        a.erase(a.begin());
    }
    
    sort(passedIndex.begin(), passedIndex.end());
    
    for(int i = 0; i < passedIndex.size(); i++){
        cout << passedIndex.at(i) << endl;
    }
}
