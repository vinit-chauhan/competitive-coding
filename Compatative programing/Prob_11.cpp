#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
     int size, i, ele, vote = 0;
     int *arr;
     cin >> size;
     arr = (int*)malloc(size*sizeof(int));
     for(i = 0; i < size; i++)
        cin >> arr[i];
     ele = arr[0];
     for(i = 1; i < size; i++)
     {
            if(ele == arr[i])
                vote += 1;
            else if (vote > 0)
                vote -= 1;
            else
                ele = arr[i];
     }
     int count = 0;
     for(i = 0; i < size; i++)
     {
         if(ele == arr[i])
            count++;
     }
     if(count > (size / 2))
        cout << "YES" << endl;
     else
        cout << "NO" << endl;
    }
    return 0;
}
