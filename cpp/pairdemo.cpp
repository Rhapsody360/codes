#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "how many entries: ";
    cin >> n;
    pair <int,string> array[n];
    string lastname;
    int number;
    for (int i = 0; i < n; i++){
        cin >> number;
        cin >> lastname;
        array[i].first=number;
        array[i].second=lastname;
    }
    // sort the array based on the number
    int max;
    for (int i = 0; i < n-1; i++)
    {
        max=n-i;
        for (int j = 1; j < n-i; j++)
        {
            if (array[j].first>array[max].first)
            {
                pair <int,string> temp= array[i];
                array[j]=array[i];
                array[j]=temp;
                // swap(array[j],array[max]);
            }
        }
        
    }
    
    cout << "after sorting:"<<endl;
    for (int i = 0; i < n; i++) {
        cout <<"number: "<< array[i].first <<"\n";
        cout <<"last name: "<< array[i].second <<"\n\n";
    }
    
    return 0;
}