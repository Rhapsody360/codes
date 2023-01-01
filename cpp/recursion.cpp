#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
    // write your code here
    if (n==0){
        return 1;
    }
    int xnb2=powerLogarithmic(x,n/2);
    int xn = xnb2*xnb2;
    if (n%2==1){
        xn =xn*x;
    }
    return xn;
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}