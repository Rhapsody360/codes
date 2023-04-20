#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s1, s2;

        // s1 always of greater length than s2 and n > m always
        if (n > m)
        {
            cin >> s1 >> s2;
        }
        else
        {
            cin >> s2 >> s1;
            swap(n, m);
        }

        unordered_map<char, int> um1; // stirng s1 -- n
        unordered_map<char, int> um2; // stirng s2 -- m

        for (int i = 0; i < n; i++)
        {
            if (i < m) {
                char ch1 = s2[i];
                um2[ch1]++;
            }
            char ch2 = s1[i];
            um1[ch2]++;
        }

        bool flag = false;

        // iterating over the smaller string 
        /* all chars in s2 must be present in s1 otherwise print "NO"*/
        for (auto it : um2)
        {   
            char ch = it.first; //key
            int f2  = it.second;//value

            // checking frequency of that char in s1 -- if f2 =< f1 -- fine ... if f2 > f1 print NO
            int f1 = um1[ch];

            // ch not present in the string -- print no and go to other test case
            if (um1.find(ch) == um1.end()) {
                cout << "NO" << endl;
                flag = true;
                break;
            }

            if (f2 > f1) {
                cout << "NO" << endl;
                flag = true;
                break;
            }
            else {
                um1[ch] = f1 - f2;
            }
        }

        if (flag == true) {
            continue;
        }

        // now checking the rest of the chars of stirng s1
        // not more than 1 char's frequecy should be more than 1

        int oddCount = 0;
        for (auto it : um1)
        {
            char ch = it.first;
            int f = it.second;

            if (f % 2 != 0) {
                oddCount++;
            }
            if (oddCount == 2) {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }

        if (flag == true) {
            continue;
        }

        // if rest all char's of s1 are also pallindrome then print
        cout << "YES" << endl;
    }

    return 0;
}