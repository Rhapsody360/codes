#include<iostream>
#include<string>
#include<vector>
using namespace std;//	 0     1	 2	   3	 4 	   5	 6 		7	 8    9
vector <string> keypad={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
vector<string> getKPC(string s){
	if (s.length()==0){
		vector <string> myresult= {""};
		return myresult;
	}
	char fc=s[0];
	int fpos=fc-'0';
	string ros =s;
	ros.erase(0,1);
	vector <string> rrs=getKPC(ros);
	vector <string> myresult;
	for (char i : keypad[fpos]){
		for (string j : rrs){
			myresult.push_back(i+j);
		}
	}
	return myresult;
}

int main()
{
	string s;
	cin >> s;
	vector<string> ans = getKPC(s);
	int cnt = 0;

	cout << '[';
	for (string str : ans)
	{
		if (cnt != ans.size() - 1)
			cout << str << ", ";
		else
			cout << str;
		cnt++;
	}
	cout << ']';
}