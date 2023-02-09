#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> get_stair_paths(int n) {
  //Write your code here
  if (n == 0) {
    vector <string> zero = {""};
    return zero;
  }
  else if (n<0){
      vector <string> zero = {};
    return zero;
  }
  vector <string> paths;
  vector <string> pathsn1 = get_stair_paths(n-1);
  vector <string> pathsn2 = get_stair_paths(n-2);
  vector <string> pathsn3 = get_stair_paths(n-3);
  for (auto i : pathsn1){
      paths.push_back("1"+i);
  }
  for (auto i : pathsn2){
      paths.push_back("2"+i);
  }
  for (auto i : pathsn3){
      paths.push_back("3"+i);
  }
  return paths;
}

int main() {
  int n;
  cin >> n;
  vector<string> ans = get_stair_paths(n);
  int cnt = 0;

  cout << '[';
  for (string str : ans) {
    if (cnt != ans.size() - 1)
      cout << str << ", ";
    else
      cout << str;
    cnt++;
  }
  cout << ']';
}