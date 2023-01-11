#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x,y;
        cin >> x >> y;
        int flag = 0;
        long n;
        for (long n=0;n<=1000000000000000000;n++){
            if (((n+y)%x == 0) && ((n+x)%y== 0)){
                cout << n << endl;
                break;
            }
        }
    }
    return 0;
}