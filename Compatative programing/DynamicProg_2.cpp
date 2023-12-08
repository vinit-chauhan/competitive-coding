//Dynamic Programming --> Knapsack problem

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int knap_array[10][10]; // [Items][Capacity]
int weight[10], profit[10];
int Knapsack(int num_of_item,int capacity);

int main() {
    int capacity, number_of_items;

    cout << "Enter Capacity and Number of Items : " << endl;
    cin >> capacity >> number_of_items;

    weight[0] = 0;
    profit[0] = 0;

    for(int i = 1; i <= number_of_items; i++)
        cin >> weight[i] >> profit[i];

    for(int i = 1; i <= number_of_items; i++)
        cout << "W = " << weight[i] << " P = " <<  profit[i] << endl;

    int answer = Knapsack(number_of_items, capacity);
    cout << "Answer is :" << answer;
    return 0;
}

int Knapsack(int num_of_item,int capacity) { // problem for i = 2 and j = 1
    for(int i = 0; i <= num_of_item; i++) {
        for(int j = 0; j <= capacity; j++) {

            if(i == 0 || j == 0) {
                knap_array[i][j] = 0;
            } else if(weight[i] <= capacity) {
                int ans1, ans2;
                ans1 = knap_array[i - 1][j];
                ans2 = knap_array[i - 1][j - weight[i]] + profit[i];
                knap_array[i][j] = max(ans1, ans2);
            } else {
                knap_array[i][j] = knap_array[i - 1][j];
            }
        }
    }

    // Print Knapsack Table
    int max_num = knap_array[0][0];
    for(int i = 0; i <= num_of_item; i++) {

        for(int j = 0; j <= capacity; j++) {
            cout << knap_array[i][j] << " ";
            max_num = max(max_num, knap_array[i][j]);
        }

        cout << endl;
    }

    return max_num;
}


/*
6 3
1 10
2 12
4 28
*/
