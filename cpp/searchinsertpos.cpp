#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& vec, int key) {
        int n = vec.size();
            int start=0;
        /*to prevent segmentation fault we use size -1 */
        int end=vec.size()-1;
        int mid;
        int ans = n;
        while(start<=end){ // to make all test cases pass and not stuck in an endless loop
            mid = (start+end)/2;
            if (vec[mid]>=key){  //maybe an answer
                end=mid-1;
                //look for smaller indices on the left
                ans = mid;
            }
            else {
                //not an ans look on the right side
                start = mid +1;
            }
        }
        //cout << "the element was not found !\n";
        return ans;
    }
};

int main(){
    Solution * ob;
    int tc;
    cin >> tc;
    while(tc--){
        int n,key;
        cin >> n >> key;
        vector <int> arr;
        for (int i = 0;i<n;i++){
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        int ans = ob->searchInsert(arr,key);
        cout <<"the element should be at:"<<ans<<endl;  
    }


    return 0;
}