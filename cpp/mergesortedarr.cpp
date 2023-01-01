#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n1,z;
    cin >> n1 >> z; //where z is the numbers of zeroes
    int a1[n1+z]={0};
    int temp;
    for (int i = 0;i<n1;i++){
        cin >> a1[i];        
    }

    // for (int i = 0;i<n1+z;i++){//temp debug loop
    //     cout << a1[i];        
    // }

    //cout << "array 2:"<<endl;//temp debug
    int n2;
    cin >> n2;
    int a2[n2];
    for (int i=0;i<n2;i++){
        cin >> a2[i];
    }

    // end of input

    //main logic begins
    int mn=n1+n2;
    int p1=0,p2=0,j=0;
    int op[mn];
    while (p1<n1 && p2<n2){
        if (a1[p1]<a2[p2]){
            op[j++]=a1[p1++];
        }
        else{
            op[j++]=a2[p2++];
        }
        
    }

    // copy remaining elements of the larger array

    while (p1<n1){//a1 has more elements
        op[j++]=a1[p1++];
    }
    while (p2<n2){//a2 is larger
        op[j++]=a2[p2++];
    }


    //output
    for (int i=0;i<mn;i++){
        a1[i]=op[i];
        cout << a1[i] <<" ";
    }

    // main logic end

}