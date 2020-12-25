#include <sstream>
#include <vector>
#include <iostream>
#include<typeinfo>
using namespace std;

int main() {
    int num;
    cin >> num;
    stringstream ss;
    ss<<num;
    string s1=ss.str();
    cout<<s1;
    cout<<s1;
//    cout<<typeid(s1).name();
    return 0;
}
