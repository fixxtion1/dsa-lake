#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    if(dr==0 and dc==0){
        vector<string> ans;
        ans.push_back("");
        return ans;
    }else if (dr<0 or dc<0){
        vector<string> ans;
        return ans;
    }

    vector<string> path1 = getMazePaths(sr, sc, dr-1, dc);
    vector<string> path2 = getMazePaths(sr, sc, dr, dc-1);

    vector<string> paths;
    for(auto i: path1) paths.push_back(i+"v");
    for(auto i: path2) paths.push_back(i+"h");

    return paths;

}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}