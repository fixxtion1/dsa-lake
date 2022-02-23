//replace bits in n by m

#include<iostream>
using namespace std;

void clearBitInRange(int &n, int i, int j){
	int mask = (-1 << (j+1)) | ((1 << i)-1);
	n = (n | mask);
}

void replaceBits(int &n, int i, int j, int m){
	clearBitInRange(n, i, j);
	int mask = (m << i);
	n = (n | mask);

}
int main(){
	return 0;
}
