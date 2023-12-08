#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j;
    printf("Done");
    for(i = 0; i < 500; i++)
        for(j = 0; j < 3; j++)
            printf(".");
        for(j = 0; j < 3; j++)
            printf("\b");

    return 0;
}
