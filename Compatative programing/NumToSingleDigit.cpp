#include<iostream>
#include<string>
using namespace std;

int main() {
    int inputInt, sum;
    string inputString;

    cin >> inputInt;
LOOP:
    inputString = to_string(inputInt);

    int length = inputString.length();
    cout << length << endl;
    int i = 0;
    while(length--) {
        sum = sum + ( 48 - inputString[i] );
        i += 1;
    }
    inputInt = sum;

    if(inputInt > 9)
        goto LOOP;
    cout << "Answer : " <<  inputInt << endl;

    return 0;
}
