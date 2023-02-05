#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> get_stair_paths(int n){
	if (n == 0){
		vector <string> myresult={""};
		return myresult;
	}
	vector <string> myresult;
	for (int i = n-1;i>-1;i--){
		vector <string> rres=get_stair_paths(i);
		for (auto j : rres){
			if (j==""){
				myresult.push_back("1");
				
			}
			else {
				myresult.push_back(j+'1');
			}
		}
		// for (auto j: myresult){
		// 	char lc = j[j.length()-1];
		// 	if (j!=""){
		// 		j.erase(j.length()-1,1);
		// 	}
		// 	if (j==""){
		// 		j='1';
		// 	}
		// 	else {
		// 		j=j+(char)(((int)lc) + 1);
		// 	}
		// 	myresult.push_back(j);
		// }
	}
	return myresult;
}

int main(){
	int n;
	cin >> n;
	vector<string> ans = get_stair_paths(n);
	int cnt = 0;
	cout << '[';
	for (string str : ans){
		if (cnt != ans.size() - 1)
			cout << str << ", ";
		else
			cout << str;
		cnt++;
	}
	cout << ']';
}