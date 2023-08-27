//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    int binary_search(int arr[],int n,int key){
        int start=0;
        /*to prevent segmentation fault we use size -1 */
        int end=n-1;
        int mid;
        while(start<=end){ // to make all test cases pass and not stuck in an endless loop
            mid = (start+end)/2;
            if (arr[mid]==key){
                //cout << "the key is found at "<<mid; 
                return mid;
            }
            else if (arr[mid]>key){
                end=mid-1;
            }
            else {
                start = mid +1;
            }
        }
        //cout << "the element was not found !";
        return -1;
    }
    public:
    vector<int> find(int arr[], int n , int x ){
        // code here
        /*use binary search to find first occurence
        and then make 2 pointer travel from there
        to find the first and last occurence
        return -1 if not found at all*/

        int foundat = binary_search(arr,n,x);
        // cout <<"found at: "<< foundat << endl;
        int firstocc = foundat,lastocc = foundat;
        while (arr[firstocc-1]==x){
            firstocc--;
        }
        while (arr[lastocc+1]==x){
            lastocc++;
        }
        vector <int> ans;
        ans.push_back(firstocc);
        ans.push_back(lastocc);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends