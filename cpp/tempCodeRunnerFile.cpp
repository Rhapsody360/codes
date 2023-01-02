#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int b;
        cin >> b;
        if (b <=3)
            cout << 0 << endl;
        else
            cout << (b/2)*(b/2)-(b/2)-((b/2)*(b/2)-(b/2))/2 << endl;
    }
    return 0;
}