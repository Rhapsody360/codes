#include <bits/stdc++.h>
using namespace std;
int isprime(int n){
    int flag=0;
    for (int i=n-1;i>=2;i--){
        if (n%i==0){
            flag =1;
            //cout << "divided at:" << i<<endl;
            break;            
        }
    }
    if (flag){
        return 0;
    }
    else {
        return 1;
    }
} 
int main() {
    //ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int ncopy=n,loopguard=n;
        while (--loopguard>0){
            if (isprime(ncopy--)){
                cout << ++ncopy << endl;
                break;
            }
            else if (isprime(n++)){
                cout << --n << endl;
                break;
            }
        }
    }
    return 0;
}