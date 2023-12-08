#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int array[], int low, int high);
int partition(int array[], int low, int high);

int *array;
// try this with Link-List
int main()
{
    int num, i = 0;
    scanf("%d\n", &num);
    while (array[i] != -1)
    {
        array = (int *)malloc(i * sizeof(*array));
        scanf("%d", &array[i]);
        i += 1;
    }
    sort(array, 0, i)
        printf("%d", array[num]);
    return 0;
}

void sort(int array[], int low, int high)
{
    int pi;
    if (low < high)
    {
        pi = partition(array, low, high);

        sort(array, low, pi - 1);
        sort(array, pi + 1, high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot, temp, i, j;
    pivot = array[high];

    i = (low - 1);
    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    return (i + 1);
}
