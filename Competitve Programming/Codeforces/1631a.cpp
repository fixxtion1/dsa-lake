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
	int a[n], b[n];
	
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
			
	int m1 = *max_element(a, a+n);
	int m2 = *max_element(b, b+n);
	
	
	if(m1>m2){
		for(int i=0; i<n;i++) {
			if(a[i]<b[i]) {swap(a[i], b[i]);}}
	}
		
	else{
		for(int i=0; i<n;i++) {if(b[i]<a[i]) {swap(b[i], a[i]);}}
	}
		
	m1 = *max_element(a, a+n);
	m2 = *max_element(b, b+n);
	
	cout<<m1*m2<<"\n";
 
 
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
