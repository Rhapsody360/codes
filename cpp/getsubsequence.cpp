#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> gss(string s){
    // write your code here
    if (s.length() == 0){
        vector <string> myresult = {""};
        return myresult;
    }
    char fc = s[0];
    string ros = s;
    ros.erase(0,1);
    vector <string> gssresult=gss(ros);
    vector <string> myresult;
    for (string i:gssresult){
        myresult.push_back(i);
    } 
    for (string i:gssresult){
        myresult.push_back(fc+i);
    }
    return myresult;
    
    
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
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