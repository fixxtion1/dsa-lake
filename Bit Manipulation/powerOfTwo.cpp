#include<iostream>
using namespace std;

int main(){
	int n; cin >> n;

	if(n & (n-1)) cout << "Not Power of Two";
	else cout << "Power of 2";
	
	return 0;
}
