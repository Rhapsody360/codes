#include <bits/stdc++.h>
using namespace std;
int main() {
    //ios_base::sync_with_stdio(false);
    int tc;
    scanf("%d",&tc);
    while (tc--) {
        int n,x;// goal ie:x contains negative numbers too
        cin >> n >> x;
        int reachable=1,n;
        string answer;
        while (n--){
            if (reachable<x){
                reachable=reachable +1;
                answer=answer+"+";
                //cout <<"reachable:"<< reachable<<",n:"<<n<<",ans:"<<answer<<endl;  
            }
            else if (reachable>x){
                reachable=reachable-1;
                answer=answer+"-";
                //cout <<"reachable:"<< reachable<<",n:"<<n<<",ans:"<<answer<<endl;    
            }
            else if(reachable==x){
                answer=answer+"*";
                //cout <<"reachable:"<< reachable<<",n:"<<n<<",ans:"<<answer<<endl;    
            }
        }
        if(reachable != x){
            cout << "-1"<<endl;
        }
        else {
            cout << answer << endl;
        }
        
    }
    return 0;
}