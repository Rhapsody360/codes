#include <bits/stdc++.h>
using namespace std;
int main() {
	int tc;
	cin >> tc;
	while (tc--){
	    int n,doll;
	    cin >> n;
	    int dolls[n]={0};
	    for (int i = 0 ;i<n;i++){
	        cin >> doll;
            if (dolls[doll]==0){
                dolls[doll]=1;
            }
            else if (dolls[doll]==1){
                dolls[doll]=0;
            }
	    }
	    for (int i=0;i<n;i++){
	        if (dolls[i]==1){
	            cout << i << endl;
                break;
	        }
            //cout << "dolls:"<<dolls[i]<<endl;
	    }
        
	}
	return 0;
}
