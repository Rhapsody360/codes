//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[]){
        double frac[n] ;
        for (int i = 0; i < n; i++){
            frac[i]=(double)numerator[i]/(double)denominator[i];
            //cout <<fixed<<setprecision(5)<< frac[i] <<endl; 
        }
        //use frac array now on;
        int pairs = 0;
        for (int i = 0 ;i<n;i++){
            if (frac[i]==-1){
                continue;
            }
            /*now search for remaining in frac
            if an element found = remaining, meaning their sum = 1
                pairs++;
                mark that number and the present number somewhere(frac array)
            and continue all over again until all such pairs have been found*/
            for (int j = 0 ;j<n;j++){
                if (frac[j]==-1){
                    continue;
                }
                if (i!=j && frac[j]==1-frac[i]){ //avoid i==j to skip elements at same place
                    frac[i]=-1;
                    frac[j]=-1;
                    pairs++;
                }
            }
        }
        return pairs;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
        _getch();
    }
}
// } Driver Code Ends