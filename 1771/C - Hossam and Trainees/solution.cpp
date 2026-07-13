#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
 
using namespace std;
 
const int LIMIT = (int)sqrt(1000000000);
 
vector<bool> isPrime(LIMIT + 1, true);
vector<int> primes;
 
void buildSieve() {
    isPrime[0] = isPrime[1] = false;
 
    for (int p = 2; p * p <= LIMIT; p++) {
        if (isPrime[p]) {
            for (int q = p * p; q <= LIMIT; q += p)
                isPrime[q] = false;
        }
    }
 
    for (int p = 2; p <= LIMIT; p++) {
        if (isPrime[p])
            primes.push_back(p);
    }
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 1)
            a.push_back(x);
    }
 
    // Check for duplicate numbers
    unordered_set<int> nums;
    for (int x : a) {
        if (nums.count(x)) {
            cout << "YES
";
            return;
        }
        nums.insert(x);
    }
 
    unordered_set<int> seen;
 
    for (int num : a) {
        int x = num;
 
        for (int p : primes) {
            if (1LL * p * p > x)
                break;
 
            if (x % p == 0) {
                if (seen.count(p)) {
                    cout << "YES
";
                    return;
                }
                seen.insert(p);
 
                while (x % p == 0)
                    x /= p;
            }
        }
 
        if (x > 1) {
            if (seen.count(x)) {
                cout << "YES
";
                return;
            }
            seen.insert(x);
        }
    }
 
    cout << "NO
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    buildSieve();
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}