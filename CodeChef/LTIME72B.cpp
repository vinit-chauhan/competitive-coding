#include<iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n, index = 0;
        cin >> n;
        int arr[n];
        int i = 0;
        while(i < n) {
            char ch;
            cin >> ch;
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                arr[i] = 1;
            else
                arr[i] = 0;
            i += 1;
        }
        if (n > 1) {
            i = 1;
            while(i < n) {
                if(arr[i - 1] == 0 && arr[i] == 1)
                    index += 1;
                i += 1;
            }
            cout << index << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}

        //
        // i = 0;
        // while(i < n) {
        //     cout << arr[i] << " ";
        //     i += 1;
        // }
        // cout << endl;
