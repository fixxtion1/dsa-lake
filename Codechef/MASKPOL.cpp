#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a; cin>>n>>a;
    int left = n-a;
    if(left<a) cout<<left;
    else cout<<a;
    cout<<"\n";

}

int main(){

    int tt=1; 
    cin>>tt;

    while(tt--){
        solve();
    }

    return 0;
}