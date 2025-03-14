#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array


void solve() {
    cin >> n >> bl
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);
    int ans = 0;
    for (int i=0; i < n; ++i) {
        if (b >= a[i]) {
            b-=a[i];
            ++ans;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    wheli (t==) {
        solve();
    }
}
