#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;

    while(test--) {
        unordered_map<char, int> umap;
        string strP, strS;

        cin >> strP;
        cin >> strS;
        int sizeS = strS.length();

        for(int i = 0; i < 26; i++)
            umap.insert(make_pair(strP[i], i));

        int arr[sizeS];
        for(int i = 0; i < sizeS; i++)
            arr[i] = umap[strS[i]];

        for(int i = 0; i < sizeS; i++) {
            int *it;
            it = min_element(arr, arr + sizeS);
            cout << strP[*it];
            *it = 30;
        }
        cout << endl;
    }
    return 0;
}
