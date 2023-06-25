#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int pcounter = 0;
        string ans;
        for (int i= 0;i<s.length();i++){
            if (s[i] == '('){
                if (pcounter != 0){
                    ans = ans + '(';
                    pcounter++;
                }
                else if(pcounter == 0){
                    pcounter ++;
                }
            }        
            else if(s[i] == ')'){
                pcounter --;
                if(pcounter != 0){
                    ans = ans + ')';
                }
                
            }
        }
        return ans;
    }
};

int main(){
	cout<<"inside main function\n";
    string inp;
    cin >> inp;
	Solution * ans = new Solution();
	string s = ans-> removeOuter(inp);
	cout << "\nrequired output\n";
	cout << s;
	cout<<"\nnormal exit\n"; 
}