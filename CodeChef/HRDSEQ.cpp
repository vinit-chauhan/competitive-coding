#include <bits/stdc++.h>
using namespace std;

#define N 128
#define debug(x) cerr << #x << " : " << x << endl;

int find_occurence(vector<int> vec, int index) {
    int count = 0;
    int element = vec[index - 1];
    for(int i = 0; i < index; i++) {
        if(vec[i] == element) count ++;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    unordered_map<int, int> umap;
    vector<int> sequence;
    // number {{last occ, count}, length}
    pair<pair<int, int>, int> temp;
    for(int i = 0; i <= N; ++i) {
        if(i <= 1) {
            sequence.emplace_back(0);
            umap[sequence[i]] = i;
        } else {
            if(umap[sequence[i - 1]] >= 1) {
                sequence.emplace_back(i - umap[sequence[i - 1]]);
            } else {
                sequence.emplace_back(0);
            }
            umap[sequence[i - 1]] = i;
        }
    }

    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        cout << find_occurence(sequence, n) << endl;
    }
    return 0;
}
