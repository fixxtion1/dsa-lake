#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

ll w, h, n;
bool predicate(ll m){
	ll area = floor(1.0*m/h) * floor(1.0*m/w);
	return area >= n;

}

void solve(){
	cin >> w >> h >> n;
	ll mx = max(w, h);
	ll l = 0, e = 1;
	ll m;
	while(!predicate(e)) e*=2;

	while(l < e){
		m = l + (e-l)/2;
		if(predicate(m)){
			e = m;
		}
		else{
			l = m+1;
		}
	}
	cout << l;


	
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}
