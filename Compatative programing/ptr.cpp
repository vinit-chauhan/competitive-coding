#include<iostream>
using namespace std;

int main()
{
    char c[] = "GATE2019";
    char *p;
    p = c;
    printf("%c \n", p[3]-p[1]);
    printf("%s", p + p[3]-p[1]);
    return 0;
}
