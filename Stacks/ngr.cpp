// I/O: 1 3 2 4
// O/P: 3 4 4 -1

//Idea is to traverse the array from last and che

//stack.empty() -> -1
//s.top() > arr[i] -> s.top()
//s.top() <= arr[i]: pop till stack becomes empty or you find larger element at the top


#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

void solve(){
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
		
		
	stack<int> s;
	vector<int> ans;

	for(int i=n-1; i>=0; i++){
		if(s.empty()) ans.push_back(-1);
		else if(s.size()>0 and s.top()>arr[i]) ans.push_back(s.top());
		else if(s.size()>0 and s.top<=arr[i]){
			while(s.size()>0 and s.top()<=arr[i]){
				s.pop();
			}
			if(s.empty()) ans.push_back(-1);
			else ans.push_back(s.top());
		}
		s.push(arr[i]);
	}
	
	reverse(all(ans));
	
	for(int i:ans){
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