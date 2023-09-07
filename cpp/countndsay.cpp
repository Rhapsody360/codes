#include <bits/stdc++.h>
using namespace std;

string foo(string str){
    int n = str.size();
    int count = 1;
    string ans;
    for (int i = 0;i<n;i++){
        char num = str[i];
        if (str[i]==str[i+1]){
            count++;
        }
        else{
            ans = ans + char(count+48) + num;
            count = 1;
        }
    }
    return ans;
}

string countAndSay(int n) {
    //n max will not exceed 30
    if (n == 1){
        return "1";
    }
    else {
        string answer = "11";
        for (int i = 1;i<n-1;i++){
            answer = foo(answer);
        }
        return answer;
    }
}

int main(){
    int tc;
    cin >> tc ;
    while (tc--){
        int n;
        cin>> n;
        cout <<"ans:"<< countAndSay(n) << endl;
    }
    return 0;
}