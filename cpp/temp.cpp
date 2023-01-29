#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >>n;
        int a[n],b[n];
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        for (int i=0;i<n;i++){
            cin >> b[i];
        }
        int max =*max_element(a,a+n);
        vector <int> c;

        //here max of array is found
        for (int i=0;i<n;i++){
            if (a[i]==max){
                c.push_back(i);
            }
        }
        if (c.size()==1){
            cout << c[0]+1 <<endl;
        }
        else {
            int nmax=-1,i;
            for (i =0;i<c.size();i++){
                //cout << "c values:"<<c[i]<<endl;
                //cout << "b of c of i:" <<b[c[i]]<<endl;
                
                if (b[c[i]]>nmax){
                    nmax=b[c[i]];
                }
                //cout << "max:"<<nmax<<endl;
            }
            //cout << c[i]+1 << endl;
            for (int i =0; i<n;i++){
                if (nmax == b[i]){
                    cout << i+1 << endl;
                }
            }
        }
    }
    return 0;
}