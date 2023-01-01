#include<iostream>
using namespace std;


void pzz(int n){// this function calls itself two times and forms a euler tree
    // write your code here

    if (n == 0){
        return;// its also popped using return line and remaining lines execute from underlying functions
    }
    cout << "pre "<< n << endl;//pre area before left call
    pzz(n-1);//left call
    cout <<"in  "<< n << endl;//in area in between both calls
    pzz(n-1);//right call
    cout << "post" << n << endl;// post area after the right call
    // after executing all linesthe function pops from the stack
}



int main(){
    int n; cin>>n;
    pzz(n);
}
