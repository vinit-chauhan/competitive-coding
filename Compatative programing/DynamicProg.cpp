//Dynamic Programming --> Fibonaci

#include<iostream>
using namespace std;

int fib[100];

long long int Fibonaci(int number)
{
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= number; i++)
        fib[i] = fib[i - 2] + fib[i - 1];
    return fib[number];
}

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    long long int Answer;
    Answer = Fibonaci(number);
    cout << "Answer is : " << Answer;
    return 0;
}
