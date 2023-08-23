#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        /*if the end of an interval > start its next interval, 
        merge them 
        */
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int>> ans;
        for (int i = 0 ; i<n ;i++){
            if (ans.empty() || ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};


int main(){
    int tc;
    cin>>tc;
    while (tc--){
        vector<vector<int>> inp;
        // its a vector of pairs
        int n;cin >> n;
        for (int i = 0; i < n; i++){
            vector <int> pair(2);
            int p1,p2;
            cin>>p1>>p2;
            pair.push_back(p1);
            pair.push_back(p2);
            inp.push_back(pair);
        }
        Solution *ob = new Solution;
        vector<vector<int>> ans;
        ans = ob->merge(inp);
        for (int i = 0 ;i<n;i++){
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl; 
        }
    }
    return 0;
}