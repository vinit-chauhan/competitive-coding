#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " : " << x << endl;


// fotr comma saptrated int string
vector <int> getIntInputVector(string str) {
    vector <int> vec;
    istringstream ss(str);
    for (int i; ss >> i;) {
        vec.emplace_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    return vec;
}

// for comma saptrated string
vector <string> getStringInputVector(string str) {
    vector <string> vec;
    string temp = "";
    for(int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if(ch == ',' or i == (str.size() - 1)) {
            if(i == (str.size() - 1)) temp += ch;
            vec.emplace_back(temp);
            temp = "";

        } else {
            temp += ch;
        }
    }
    return vec;
}

int main() {
    ios::sync_with_stdio(0);

    // comma sapreted input string...
    string str;
    getline(cin, str);


    return 0;
}
