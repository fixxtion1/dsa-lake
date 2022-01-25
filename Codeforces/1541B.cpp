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
	int a[n]; for(int i=0; i<n;i++) cin>>a[i];
	
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j =i+1 ; j<n; j++){
			if(i+j<=2*n) ++count;
		}
	}
	cout<<count<<"\n";
 
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
