//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        /*use 2 pointers
        initialsie a count variable=final ans, and a product so far
        maintain a product variable which notes the product of the elements 
        between the 2 pointers,
        increment the right pointer by 1
        recalculate the product so far
        if the product is less than k, good, increment count variable, increment right pointer
        else if product is greater than k, pause right pointer, increment left pointer,right pointer = left pointer 
        recalculate product so far, repeat to line 18
        return count */

        i unintentionally used sliding window here without knowing what it is ! the logic here is correct but some test cases fail
        so im going to leave this as a wrong answer but i came up with it (sliding window)! and that is a great achievement 
        im not even gonna comment these lines so that you can read all this

        
        long long product = 1;
        int count = 0; 
        int left=0,right = 0;//the 2 pointers 


        //product = a[left];


        while(right<n){//potential problem

            //logic to calculate product between the left and right pointers: potential problem
            if(left==right){
                product=a[left];
            }
            else{
                product = product * a[right];
            }
            
            if(product<k){
                count++;
                if(right<n){right++;}
            }
            else{
                left++;
                right=left;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends