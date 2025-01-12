#include<bits/stdc++.h>
using namespace std;

#define all(x)     x.begin(),x.end()
#define endl       '\n'

void solve(int tc) {
    string s;
    cin >> s;
    int n = s.size();
    int ind = -1;
    for(int i = 0 ; i < n ; i++) {
        if(s[i] == 'a')
            ind = i;
    }
    string age, pore;
    for(int i = 0 ; i < n ; i++) {
        if(s[i] != 'a') {
            if(i <= ind) {
                age += s[i];
            }
            else {
                pore += s[i];
            }
        }
    }
    reverse(all(pore));
    int x = 0;
    while(age.size() < pore.size()) {
        age += pore.back();
        pore.pop_back();
        x++;
    }
    reverse(all(pore));
    if(age == pore) {
        ind += x;
        for(int i = 0 ; i <= ind ; i++) {
            cout << s[i];
        }
        cout << endl;
    }
    else {
        cout << ":(" << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin >> t;
    for(int i = 1 ; i <= t ; i++)
        solve(i);
    return 0;
}
