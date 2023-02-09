#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    if (sr == dr && sc ==dc){
        vector <string> base;
        base.push_back("");
        return base;
        cout << "base returned" << endl;
    }
    vector <string> hpaths ;
    vector <string> vpaths ;
    vector <string> paths ;
    if (sc<dc){
        hpaths = getMazePaths(sr,sc+1,dr,dc);
    }
    if (sr < dr){
        vpaths = getMazePaths(sr+1,sc,dr,dc);
    }
    for (auto i : hpaths) {
        paths.push_back("h"+i);
    }
    for (auto j : vpaths) {
        paths.push_back("v"+j);
    }
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