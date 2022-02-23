#include<iostream> 
using namespace std;

int countBits(int n){
	int ans = 0;
	while(n > 0){
		n = n & (n-1);
		ans++;
	}
	return ans;
}

int main(){
	int n; cin >> n;
	int cnt = 0;

	while(n){
		cnt += (n & 1);
		n = n >>  1;
	}
	cout << countBits(n) << "\n";
	cout << cnt;
	return 0;
}
