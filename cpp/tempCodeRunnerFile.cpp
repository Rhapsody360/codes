#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string str = "Hello";
    string asf = "" ;
    string s1 = "12";
    char ch = '1';
    // std::cout << asf + (char)(stoi(s1) + 'a' - 1);
    std :: cout << s1 + ch << endl;
    std :: cout << ch + s1 << endl;
    std :: cout << ch + str << endl;
    std :: cout << (str + ch) << endl;

    std :: cout << ("" + '1') << endl;;
    
    return 0;
}
