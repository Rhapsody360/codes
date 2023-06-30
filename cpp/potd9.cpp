//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
    private:
        bool isHappy(int n){
            if (n==1 || n==7){
                return true;
            }
            int sum=n,ncopy =n; 
            while(sum>9){
                sum = 0;
                while(ncopy>0){
                    int d=ncopy%10;
                    // ncopy = ncopy%10;
                    sum+=d*d;
                    ncopy/=10;
                }            
                if (sum == 1){
                    return true;
                }
                ncopy = sum;
            }
            if(sum == 7) 
                return true; 
            return false;
        }
    public:
        int nextHappy (int N){
            int x=N+1;
            int r=x;
            while (true){
                if(isHappy(x)){
                    return x;
                }
                x++;
                r=x;
            }
        }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends