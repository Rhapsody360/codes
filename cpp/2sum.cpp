#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*2 pointer approach
        constraints on front pointer 0=<fp=<n-2
        constraints on rear pointer 1=<rp=<n-1 to prevent segfault
        
        while (front <n){
            calculate sum a[front]+a[rear]
            if (sum == target){
                ans.add(front, rear)
                break 
            }
            else{
                rear++
            }
            if (rear == n){
                front++; //apply constrain here
                rear = front;
            }
            else {
                rear++; //apply constarin here
            }
        }*/
        vector <int> ans;
        ans.push_back(-1);
        ans.push_back(-1);
        int front=0,rear = 1,n=nums.size();

        while (front < n-1)
        {
            int sum = nums[front]+nums[rear];
            if (sum == target){
                // ans.add(front, rear)
                ans.insert(ans.begin(),front);
                ans.insert(ans.begin()+1,rear);
                break ;
            }
            else{
                rear++;
                if (rear == n-1){
                    front++;
                    rear = front;
                }
            }
        }
        return ans;
    }
};


int main(){
    Solution *ob;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,target;
        cin >> n >> target;
        vector <int> input(n);
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            input.push_back(ele);
        }
        vector <int> ans = ob->twoSum(input,target);

        for(int i = 0;i<2;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}