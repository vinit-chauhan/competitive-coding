#include<iostream>
using namespace std;

int find_max(int Array[], int Size);
int find_sec_max(int Array[], int Size, int index_of_prev_max);
int main() {
    int test;
    cin >> test;
    while(test--) {
        int N;
        cin >> N;
        int Array[N];
        int i = 0;
        while(i < N)
            cin >> Array[i++];

        int Num1 = find_max(Array, N);

        i = 0;
        while(i < N) {
            if(Num1 == Array[i]) {
                Array[i] = -1000;
                break;
            }
            i += 1;
        }
        int Num2 = find_sec_max(Array, N, i);
        int Numx = Array[i-1] + Array[i+1];
        if (Num2 == -10001)
            cout << Num1 << endl;
        else if(Numx < Num1+Num2)
            cout << Num2 << Num1 << endl;
        else
            cout << min(Array[i-1],Array[i+1]) << max(Array[i-1],Array[i+1]) << endl;
    }
    return 0;
}

int find_max(int Array[],int N) {
    int Max = Array[0];
    int i = 1;
    while(i < N) {
        if(Array[i] > Max)
            Max = Array[i];
        i += 1;
    }

    return Max;
}

int find_sec_max(int Array[],int N, int j) {
    int Max = -10001;
    int i = 0;
    while(i < N) {
        if(i != j-1) {
            if(Array[i] > Max && Array[i] > 0 && i != j+1 )
                Max = Array[i];
        }
        i += 1;
    }

    return Max;
}
