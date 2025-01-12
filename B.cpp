#include<bits/stdc++.h>
using namespace std;

#define all(x)     x.begin(),x.end()
#define ii         pair<int,int>
#define endl       '\n'

void solve(int tc) {
    int n;
    cin >> n;
    vector<ii> a(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(all(a));
    if(a[0].first == a[n - 1].first) {
        cout << "NO\n";
    }
    else {
        vector<int> vis(n, 0);
        vis[a[1].second] = 1;
        cout << "YES\n";
        for(int i = 0 ; i < n ; i++) {
            if(vis[i] == 0) {
                cout << 'B';
            }
            else {
                cout << 'R';
            }
        }
        cout << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)
        solve(i);
    return 0;
}
