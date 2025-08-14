#include<bits/stdc++.h>
using namespace std;
int main(){
    

    int n, k;
    
    cin >> n >> k;

    vector<int> scores(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int advancingCount = 0;
    int kthScore = scores[k - 1];

    for (int score : scores) {
        if (score > 0 && score >= kthScore) {
            advancingCount++;
        }
    }

    cout << advancingCount << endl;
    
  
  


  return 0;
}