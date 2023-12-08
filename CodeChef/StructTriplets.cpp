#include <iostream>
using namespace std;

typedef struct triplets{
    int first;
    int second;
    int third;
} trip;

class Triplets {
private:
    int first;
    int second;
    int third;

public:
    Triplets(int x, int y, int z) {
        first = x;
        second = y;
        third = z;
    }

    void printTriplet() {
        cout << first << " " << second << " " << third << endl;
    }
};

int main() {
    ios::sync_with_stdio(0);
    trip s1;
    s1.first = 5;
    s1.second = 6;
    s1.third = 7;
    Triplets t(4, 5, 7);
    t.printTriplet();
    cout << "\n";
    cout << s1.first << " " << s1.second << " " << s1.third << " " << endl;
    return 0;
}
