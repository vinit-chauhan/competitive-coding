#include<iostream>
#define SIZE 100
using namespace std;
int main()
{
    int max = SIZE;
    int prime[max + 1] = {0};
    for(int i = 2; i <= max; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*2; j <= max; j += i)
                prime[j] = 1;
        }
    }
    cout << endl;
    int i = 1;
    while(i <= max)
        cout << prime[i++] << " ";
    return 0;
}
