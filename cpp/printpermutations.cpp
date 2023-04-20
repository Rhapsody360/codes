#include <iostream>
using namespace std;

void printPermutations(string str, string asf){
    if (str == ""){
        cout << asf << endl;
        return;
        
    }
    // write your code here
    for (int i = 0;i<str.length();i++){
        char ch = str[i];
        string strcpy=str;
        strcpy.erase(i,1);
        printPermutations(strcpy,asf+ch);
    }

}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}