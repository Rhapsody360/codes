#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
	//cout << "entered solution class\n";  
    vector<int> circularGameLosers(int n, int k) {
		//cout << "entered function\n";
        vector <int> loosers;
		bool arr[50] = {0};
		for (int i = 0; i < n;i++){
			loosers.push_back(i+1);
		}
		int loc = 0;
        for (int i = 0 ; i<n*n ;i++){
			loc=(loc+(i*k))%n;
			//cout << "\npass " <<i << ",location"<<loc<<"\n";
			// for (auto i:loosers){
			// 	cout << i << " ";
			// }
            if (arr[loc]==0){
											
				//cout << "\ndeleted "<<loc+1<<" from vector,\n"<<loc<<" = actual loc marked true in arr\n";
				arr[loc] = 1;
				loosers.erase(loosers.begin()+loc-i);	//separating winners from loosers	
				
		    }
			else{
				//cout << "\nentered else\n";
				break;
			}
        }
        return loosers;
    }
};

int main(){
	int n,k;
	cout<<"inside main function\n";
	cin >> n >> k;
	Solution * ans = new Solution();
	vector <int> vec = ans->circularGameLosers(n,k);
	cout << "\nrequired output\n";
	for (auto i:vec){
		cout << i << " ";
	}
	cout<<"\nnormal exit\n"; 
}