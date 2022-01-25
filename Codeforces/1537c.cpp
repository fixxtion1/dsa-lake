#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

const auto MOD = 1000000007;
const auto INF = (int)1e9;
const auto EPS = 1e-9;
const auto PI = 3.1415926535897932384626433832795;
 
using PII = pair<int, int>;
using VI = vector<int>;
using VLL = vector<long long>;
using VS = vector<string>;
using VII = vector<PII>;
using VVI = vector<VI>;
using MPII = map<int,int>;
using SETI = set<int>;  	
using MSETI = multiset<int>; 
using int64 = long long int;
using unint64 = unsigned long long int;

 
void solve() {
	int n; cin>>n;
	vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
	
	sort(a.begin(), a.end());
	if(n==2) cout<<a[0]<<" "<<a[1];
	else{
	int mn = INT_MAX;
	int ind = -1;
	
	for(int i=1; i<n; i++){
		if(abs(a[i]-a[i-1]) < mn){
		 	mn = abs(a[i]-a[i-1]);
		 	ind =i;
		}
	}
	
	for(int i=ind; i<n; i++) cout<<a[i]<<" ";
	
	for(int i=0; i<ind; i++) cout<<a[i]<<" ";
	
	}
	cout<<endl;
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
