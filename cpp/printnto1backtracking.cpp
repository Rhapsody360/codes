#include <bits/stdc++.h>
using namespace std;

void f(int i,int n){
    //print using backtracking
    //print in reverse order
    //not allowed to decrease i
    if (i==n){
        return;
    }
    f(i+1,n);
    cout <<i <<endl;
}

int main(){
    int n,i=0;
    cin >> n;
    f(i,n);
    return 0;
}