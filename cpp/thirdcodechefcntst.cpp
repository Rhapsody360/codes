#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--) {
        int n,num=0;
        string bin;
        cin >> n;
        cin >> bin;
        for (int i =0; i<n;i++){
            if (bin[n-i-1]=='1'){
                num = num + pow(2,i);
            }
            //cout << bin[n-i-1] <<endl;
        }
        //cout << "num:"<<num << endl;
        int onecount=0;
        if (num < 3){
            cout << "NO" << endl;
            continue;
        }

        else {            
            for (int i =0;i<n;i++)
                if (bin[i]=='1'){
                    onecount++;
                }
            }
            //cout << "onecount:"<<onecount <<endl;
            if (onecount>=4){
                cout << "NO" << endl;
            }
            else cout << "YES" << endl;
    }
    return 0;
}