#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    long long gcd(long long a,long long b){
        if (a==0){
            return b;
        }
        if (b==0){
            return a;
        }
        if (a==b){
            return a;
        }
        if (a>b){
            return gcd(a-b,b);
        }
        else {
            return gcd(a,b-a);
        }
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long m = min(A,B),LCM,GCD;
        GCD=gcd(A,B);
        LCM = (A*B)/GCD;
        vector <long long> answer = {LCM,GCD};
        return answer;
    }
};

int main(){
    int a,b;
    cin >> a >> b;
    Solution * object= new Solution();
    vector <long long> answer = object -> lcmAndGcd(a,b);
    cout <<"lcm: "<< answer[0]<<endl;
    cout <<"gcd: "<< answer[1]<<endl;
    return 0;
}