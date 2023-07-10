#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int front = 0; //front is looking for number
        int rear = n-1; //rear is looking for a zero
        while(front < rear){ //sieve zeroes to the left
            if (nums[front]!=0){
                if (nums[rear]==0){
                    swap(nums[front],nums[rear]);
                    // int temp =nums[rear];
                    // nums[front]= nums[rear];
                    // nums[front]=temp;
                }
                else{
                    rear--;
                }
            }
            else{
                front++;
            }
        }

        front = 0;rear = n-1;
        while(front<rear){ // sieve 2s to the right 
            if (nums[front]==2){
                if (nums[rear]==1){
                    swap(nums[front],nums[rear]);
                    // int temp =nums[rear];
                    // nums[front]= nums[rear];
                    // nums[front]=temp;
                }
                else{
                    rear--;
                }
            }
            else{
                front ++;
            }
        }
        return;
    }
};

int main(){
    
    Solution *ob;
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector <int> arr(n);
        for (int i = 0; i < n; i++){
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        ob->sortColors(arr);
        for (int i = 0;i<n;i++){
            cout << arr[i]<< " ";
        }
        cout << endl;
    }
    return 0;
}