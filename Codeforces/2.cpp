#include <bits/stdc++.h>

using namespace std;
using li = long long;

const int N = 50013;

int b[N];
int a[N];

void solve() {
    
    int n;
    cin >> n;

    li sumb = 0;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        sumb += b[i];
    }

    li d = n * 1ll * (n + 1) / 2;

    if(sumb % d != 0) {
        cout << "NO" << endl;
        return;
    }

    li suma = sumb / d;

    for(int i = n - 1; i >= 0; i--) {
        li res = (b[i] - b[(i + 1) % n] + suma);
        if(res % n != 0 || res <= 0) {
            cout << "NO" << endl;
            return;
        }

        a[(i + 1) % n] = res / n;
    }

    cout << "YES" << endl;
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
        solve();
}
