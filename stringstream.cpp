#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	
    stringstream ss(str);
    vector<int> v;
    int sub;
	while (ss >> sub) { 
	v.push_back(sub);
	} 
    return v;

}

int main() {
    string str="12 123 22";
//    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
