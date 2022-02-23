#include<iostream>
using namespace std;

//to get the ith Bit
int getIthBit(int n, int i){
	int mask = 1 << i;
	return (n & mask) > 0 ? 1 : 0;
}

//to set the ith Bit
void setIthBit(int &n, int i){
	int mask = 1 << i;
	n = (n | mask);
}

//to clear the ith bit
void clearIthBit(int &n, int i){
	int mask = ~(1 << i);
	n = (n & mask);
}
	
void updateIthBit(int &n, int i, int v){
	clearIthBit(n, i);
	int mask = (v << i);
	
	n = (n | mask);
	
}

void clearLastIBits(int &n, int i){
	int mask = (-1 << i);
	n = (n & mask);
}

void clearBitsInRange(int &n, int i, int j){
	int mask = (-1 << (j+1)) | ((1 << i)-1);;
	n = (n & mask);
}

int main(){
	int n; cin >> n;
	//int i; cin >> i;
//	int v; cin >> v;

//	cout << getIthBit(n, i);
//	setIthBit(n, i);
//      clearIthBit(n, i);
//	updateIthBit(n, i, v);
//	clearLastIBits(n, i);

	clearBitsInRange(n, 1, 3);

	cout << n;
	
	return 0;
}

