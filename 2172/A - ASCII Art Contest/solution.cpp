#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    vector<int> scores(3);
    cin >> scores[0] >> scores[1] >> scores[2];
 
    int M = *max_element(scores.begin(), scores.end());
    int m = *min_element(scores.begin(), scores.end());
 
    if (M-m >= 10)
        cout << "check again" << endl;
    else{
        sort(scores.begin(), scores.end());
        cout << "final " << scores[1] << endl; 
    }
 
    return 0;
}