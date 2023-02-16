#include <bits/stdc++.h>
using namespace std;
int in(char c,vector <char> &arr){
    for (int i=0;i<arr.size();i++){
        if (arr[i]==c){
            return i;
        }
    }
    return -1;
}
int ins(char c,string &a){
    for (int i=0;i<a.size();i++){
        if (a[i]==c){
            return i;
        }
    }
    return -1;
}
int substring(string &b,string &a){
    for (int i = 0; i<b.size();i++){
        if(in(b[i],a) != -1){
            continue;
        }
        else {
            return 0;
        }
    }
    return 1;
}
int main() {
    //ios_base::sync_with_stdio(false);
    int tc;
    scanf("%d",&tc);
    while (tc--) {
        string a,b,temp="";
        int n,m;
        cin >> n >>m;
        cin >> a;
        cin >> b;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.begin());
        
        if (n>m){
            if(substring(b,a)){
                for (char i:a){
                    if(ins(i,b))
                }
            }
        }
        
        for (char i:b){
            temp=i+temp;
        }
        b=temp;
        string s=a+b;
        cout << s << endl;
        //cout << s <<endl;
        vector <char> odds;
        for (char i:s){
            int loc=in(i,odds);
            if (loc ==-1){
                odds.push_back(i);
            }
            else {
                odds.pop_back();
            }
        }
        if (odds.size()==1 || odds.size()==0){
            cout << "YES:"<< odds.size() << endl;
        }
        else {
            cout << "NO"<< endl;
        }
    }
    return 0;
}