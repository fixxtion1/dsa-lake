#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n;i++) cin>>a[i];

    int firstHalf = n/2;
    int secondHalf = n/2 +1;
    int sum =0;

    sort(a, a+n);
    for(int i =0; i<firstHalf; i++){
        sum+=a[i];
    }
    int average1 = sum/(firstHalf);
    sum =0;

    for(int i=secondHalf; i<n; i++){
        sum+= a[i];
    }
    int average2 = sum/(n-secondHalf);

    int final = (average2+average1)/2;

    cout<<final<<"\n";

}


int main(){

    int tt=1; 
    cin>>tt;

    while(tt--){
        solve();
    }

    return 0;
}