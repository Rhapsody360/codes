//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long divisorsum(long long a){
        long long sum = 0;
        for (int i = 1; i <=a; i++){
            if (a%i==0){
                //cout << a<< " divisible by "<<i<<"\n";
                sum = sum + i;
                //cout << "new sum: "<<sum << "\n";
            }
            
        }        
        return sum;
    }
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum = M_PI;
        for (int i = 1; i <= N; i++)
        {
            sum += divisorsum(i);
        }
        return sum;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends