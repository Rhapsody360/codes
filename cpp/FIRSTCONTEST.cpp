#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n=1,m=0;
        string s;
        cin>>n>>m;
        if(n==1){
            if(m==1){
                cout<<"2\n";
                continue;
            }
            
            int f=1;
            while((f*m-1)*n-m<=0)  f++;
            // int ans=f*(m-1)*n-m;
            // if((ans+n)%m!=0 || (ans+m)%n!=0)    cout<<1/0<<"\n";
            cout<<(f*m-1)*n-m<<"\n";
            continue;
        }
        // if(n==m){
        // 	cout<<(n-1)*m<<"\n";return;
        // }
        if(n<m)	swap(n,m);
        int g=__gcd(n,m);
        int div=n-1;
        if((n-1)*m-n<=0){
            int f=2;
            while((f*n-1)*m-n<=0)  f*=f;
            cout<<(f*n-1)*m-n<<"\n";
        }
        else cout<<(n-1)*m-n<<"\n";
    }
    return 0;
}