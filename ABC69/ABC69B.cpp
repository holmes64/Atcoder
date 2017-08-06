#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    string s; cin >> s;
    int l = s.length();
    cout << s[0] << s.length() -2 << s[l-1] << endl;

    return 0;
}