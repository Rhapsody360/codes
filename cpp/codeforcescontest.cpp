#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc = 10;
    cin >> tc;
    while (tc--){
        //cout << "while executing\n";
        int n,k,x;
        cin >>n >> k >>x;        
        if (x==1){ //forbidden number 1 hai
            if (n%2==0){ // n even number hai
                if (k==1){ // k == 1
                    cout << "NO" <<endl;
                    continue;
                }
                else{ //k>1 hai
                    cout << "YES" <<endl;
                    continue;
                }                
            }
            else{ //n odd number hai
                if (k==1){ // k == 1
                    cout << "NO" <<endl;
                    continue;
                }
                else{ //k>1 hai
                    cout << "NO" <<endl;
                    continue;
                }
            }
        }
        else{ // forbidden number >1 hai
            cout << "YES" <<endl;
            continue;
        }
    }
    return 0;
}