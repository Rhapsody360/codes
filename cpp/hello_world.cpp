#include <iostream>
#include <conio.h>
using namespace std;

void printtt(long long ans){
    cout << "printtting ans:" << endl;
}
int main(){
    cout << "=======power calculator==========="<<endl;
    cout << "enter the base:";
    long long ans;
    cin >> ans;
    cout << "enter the power:";
    int n;
    cin >> n;
    for (int i = 0 ;i<n;i++)
        ans += ans;
    cout << "final answer is:"<<ans<<endl;
    printtt(ans);
    _getch();
}
