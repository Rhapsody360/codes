#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        // for (int i = 0;i<n;i++){
        //     nums[i]-=1;
        // }
        // i=0;
        while (true){
            if (nums[i] < 0){
                return (nums[i]*-1);
            }
            nums[i++] *= -1;
        }
    }

};

int main(){
    cout << "hello bhai ! input ithr de : "<<endl; 
    Solution * ob = new Solution();
    vector <int> vec;
    int tc;
    cin >> tc;
    while(tc --){
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin>>ele;
            vec.push_back(ele);
        }
        int ans = ob->findDuplicate(vec);
        cout <<"answeer ! "<<ans<<endl;
        _getch();
    }
}