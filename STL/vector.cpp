#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	
	vector<int> v;
	
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);
	
	
	for(int i:v){
		cout << i << " ";
	}

}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	//cin>>tc;
 
	while(tc--) solve();
	return 0;
}