#include<iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int count = 0;
        int leftLimit, rightLimit;
        cin >> leftLimit >> rightLimit;

        int number = leftLimit;
        while(number <= rightLimit) {
            if(number % 10 == 2 || number % 10 == 3 || number % 10 == 9)
                count += 1;
            number += 1;
        }
        cout << count;
    }
    return 0;
}
