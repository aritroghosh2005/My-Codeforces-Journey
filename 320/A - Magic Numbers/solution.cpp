#include <bits/stdc++.h>
using namespace std;
 
long long summation(int n, vector<int> numbers){
    long long sum = 0;
    for (int num: numbers)
        sum += num;
    return sum;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s; cin >> s;
 
    // Check if it contains only 1 and 4
    for (char c: s){
        if (c!='1' && c!='4'){
            cout << "NO" << endl;
            return 0;
        }
    }
 
    // Check if it contains "444"
    if (s.find("444") != string::npos){
        cout << "NO" << endl;
        return 0;
    }
 
    if (s[0]=='4'){
        cout << "NO" << endl;
        return 0;
    }
 
    // If both true, it is magic number
    cout << "YES" << endl;
    return 0;
}