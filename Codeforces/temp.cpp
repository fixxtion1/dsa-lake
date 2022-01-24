#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    vector<int> b;
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());
// cout<<a.size()<<endl;
// a.erase(remove(a.begin(), a.end(), 1));
// for(int i:a) cout<<" "<<i<<" ";
// cout<<endl<<a.size();


    while(a.size()>1){
        set<int> s(a.begin(), a.end());

        int j=1;
        for(int i: s){
            if(s.count(j)) ++j;
            else break;
        }

        b.push_back(j);
        for(int i: s){
            a.erase(remove(a.begin(), a.end(), i));
        }   
        

    }


    cout<<b.size()<<"\n";
    for(int i:b) cout<<i<<" ";
    cout<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
    int tc=1;
    cin>>tc;

    while(tc--){
        solve();
    }
    return 0;
}

