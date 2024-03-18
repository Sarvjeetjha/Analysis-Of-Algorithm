#include <iostream>
using namespace std;
float knapsack(float profit[], float weight[], int size, float w)
{
    float pw[size + 1] = {0};
    float prof = 0;
    for (int i = 0; i <= size; i++)
    {
        pw[i] = profit[i] / weight[i];
    }
    int knap[size + 1] = {0};
    while (w > 0)
    {
        int max = -1;
        int index = -1;
        for (int i = 0; i <= size; i++)
        {
            if (knap[i] == 0)
            {
                if (pw[i] > max)
                {
                    max = pw[i];
                    index = i;
                }
            }
        }
        if (weight[index] <= w)
        {
            prof += profit[index];
            knap[index] = 1;
            w = w - weight[index];
        }
        else
        {
            float t = ((w / weight[index]) * profit[index]);

            prof = prof + t;
            w = 0;
            knap[index] = 1;
        }
    }
    return prof;
}
int main()
{
    int n;
    cout << "enter no of element in profit and weight array" << endl;
    cin >> n;
    float profit[n];
    float weight[n];
    cout << "enter element in profit array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }
    cout << "enter element in weight array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    int w;
    cout << "enter total weight of knapsacks" << endl;
    cin >> w;

    float ans = knapsack(profit, weight, n - 1, w);
    cout << ans;
    return 0;
}