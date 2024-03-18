#include <iostream>
using namespace std;

int Knapsack(int p[], int wt[], int ind, int w) {
    int pw[ind+1] = {0};
    int profit = 0;

    for (int i = 0; i <= ind; i++) {
        pw[i] = p[i] * 1.0 / wt[i];
    }

    int Knap[ind+1] = {0};

    while (w > 0) {
        int max = -1;
        int index = -1;

        for (int i = 0; i <= ind; i++) {
            if (Knap[i] == 0) {
                if (pw[i] > max) {
                    max = pw[i];
                    index = i;
                }
            }
        }

        if (wt[index] <= w) {
            profit += p[index];
            w = w - wt[index];
            Knap[index] = 1;
        } else {
            profit = profit + (w / wt[index]) * p[index];
            w = 0;
            Knap[index] = 1;
        }
    }

    for (int i = 0; i <= ind; i++) {
        cout << Knap[i] << " ";
    }
    cout << endl;

    return profit;
}

int main() {
    int p[] = {10, 5, 15, 7, 6, 18, 3};
    int wt[] = {2, 3, 5, 7, 1, 4, 1};
    int index = 6;

    cout << Knapsack(p, wt, 6, 15) << endl;

    return 0;
}
