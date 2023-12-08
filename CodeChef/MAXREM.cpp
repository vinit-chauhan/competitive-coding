#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    int max_rem = 0;
    int rem = 0;
    for(int i = 0; i < n - 1; i++) {
        rem = arr[i]%max;
        if(rem > max_rem) {
            max_rem = rem;
        }
    }

    cout << max_rem;
    return 0;
}
