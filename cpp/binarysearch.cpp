#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	vector <int> vec;
	int n;
	// cout << "how long should the array length be?:";
	cin >> n;
	// cout << "now enter the sorted vector array";
	for (int i=0;i<n;i++){
		int t;
		cin >> t;
		vec.push_back(t);
	}

	int key;
	// cout << "enter the key value to be searched";
	cin >> key;
	int start=0;
	/*to prevent segmentation fault we use size -1 */
	int end=vec.size()-1;
	int mid;
	while(start<=end){ // to make all test cases pass and not stuck in an endless loop
		mid = (start+end)/2;
		if (vec[mid]==key){
			cout << "the key is found at "<<mid; 
			return 0;
		}
		else if (vec[mid]>key){
			end=mid-1;
		}
		else {
			start = mid +1;
		}
	}
	cout << "the element was not found !";
}