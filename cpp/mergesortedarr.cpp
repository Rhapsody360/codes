#include <bits/stdc++.h>
#include <vector>
using namespace std;


// w/o using extra space
class Solution{
    private:
    void swapifgreater(long long arr1[], long long arr2[],int idx1, int idx2){
        if (arr1[idx1]>arr2[idx2]){
            swap(arr1[idx1],arr2[idx2]);
        }
    }
    public:
    //Function to merge the arrays.
    void merge(long long arr1[], long long arr2[], int n, int m) 
    { 
        // code here 
        int len = n+m;
        int gap = (len/2)+len%2;
        

        while(gap > 0){
            //front in a1,rear in a2
            int front = 0,rear=front + gap;
            while(rear < len){
                // front in a1, rear in a2
                if (front<n && rear>=n){
                    swapifgreater(arr1,arr2,front,rear-n);
                }
                //front in a2, rear in a2
                else if(front>=n){
                    swapifgreater(arr2,arr2,front-n,rear-n);
                }
                //front in a1, rear in a1
                else{
                    swapifgreater(arr1,arr1,front,rear);
                }
                front++;rear++;
            }
            if (gap==1)break;
            gap = gap/2 + gap%2;
            
        }

    } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends


/*using extra space
int main()
{
    ios_base::sync_with_stdio(false);
    int n1,z;
    cin >> n1 >> z; //where z is the numbers of zeroes
    int a1[n1+z]={0};
    int temp;
    for (int i = 0;i<n1;i++){
        cin >> a1[i];        
    }

    // for (int i = 0;i<n1+z;i++){//temp debug loop
    //     cout << a1[i];        
    // }

    //cout << "array 2:"<<endl;//temp debug
    int n2;
    cin >> n2;
    int a2[n2];
    for (int i=0;i<n2;i++){
        cin >> a2[i];
    }

    // end of input

    //main logic begins
    int mn=n1+n2;
    int p1=0,p2=0,j=0;
    int op[mn];
    while (p1<n1 && p2<n2){
        if (a1[p1]<a2[p2]){
            op[j++]=a1[p1++];
        }
        else{
            op[j++]=a2[p2++];
        }
        
    }

    // copy remaining elements of the larger array

    while (p1<n1){//a1 has more elements
        op[j++]=a1[p1++];
    }
    while (p2<n2){//a2 is larger
        op[j++]=a2[p2++];
    }


    //output
    for (int i=0;i<mn;i++){
        a1[i]=op[i];
        cout << a1[i] <<" ";
    }

    // main logic end

}*/