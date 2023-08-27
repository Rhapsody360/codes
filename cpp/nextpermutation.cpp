#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //longest prefix match
        // traverse right to left and find breakpoint where the number[i]>number[i-1]
        // on the breakpoint find and replace it with a number that is closest to the breakpoint but greater & swap
        // now arrange the remaining elements in increasing order
        int n = nums.size();
        int breakidx = -1;
        for (int i = n-2;i>=0;i--){
            if (nums[i]<nums[i+1]){
                breakidx = i;
                break;
            }
        }
        if (breakidx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = n-1;i>breakidx;i--){
            if (nums[i]>nums[breakidx]){
                swap(nums[breakidx],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+breakidx+1,nums.end());
        return ;
    }
};

int main(){
    Solution *ob = new Solution();
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector <int> vec;
        for (int i = 0; i < n; i++){
            int ele;
            cin>> ele;
            vec.push_back(ele);
        }
        ob->nextPermutation(vec);
        cout<<"ans:\n";
        for (int i = 0; i < n; i++){
            cout<< vec[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}