// WA

#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " : " << x << endl;

typedef pair<long long int, long long int> PII;

double dist(PII cord, PII baseCord) {
    double dis = sqrt(pow(baseCord.first - cord.first, 2) + pow(baseCord.second - cord.second, 2));
    return dis;
}

double min(double d1, double d2) {
    if(d1 <= d2) return d1;
    else return d2;
}

PII find_min_dist(vector<PII> vec, PII cord) {
    PII temp = vec[0];
    double minDist = dist(vec[0], cord);
    for(int it = 1; it != vec.size(); it++) {
        if(dist(vec[it], cord) < minDist) {
            minDist = dist(vec[it], cord);
            temp = vec[it];
        }
    }
    return temp;
}

int main() {
    int test;
    cin >> test;
    while(test--) {

        double minDistance = 0;
        PII myCord, nMin, mMin;
        vector<PII> nList, mList, kList;
        double nDist = 0,
               mDist = 0;
        vector<PII> minList;
        vecotr<double> nDistList, mDistList, kDiskList;



        long long int x, y;
        cin >> x; cin >> y;
        myCord = {x, y};
        int n, m, k;
        cin >>n; cin >> m; cin >> k;
        //N list
        for(int i = 0; i < n; i++) {
            cin >> x; cin >> y;
            nList.emplace_back(make_pair(x, y));
            nDistList.emplace_back(dist(make_pair(x, y), myCord));
        }
        // M list
        for(int i = 0; i < m; i++) {
            cin >> x; cin >> y;
            mList.emplace_back(make_pair(x, y));
            mDistList.emplace_back(dist(make_pair(x, y), myCord));
        }
        // K list
        for(int i = 0; i < k; i++) {
            cin >> x; cin >> y;
            kList.emplace_back(make_pair(x, y));
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                nDistList2.emplace_back(dist(nList[i], mList[j]) + nDistList[i]);
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                mDistList2.emplace_back(mList[i], nList[j]) + mDistList[i]);
            }
        }


        
        minDistance = min(nDist, mDist);
        printf("%.10f\n", minDistance);

    }
    return 0;
}
