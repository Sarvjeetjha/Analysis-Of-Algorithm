#include <iostream>
using namespace std;
float Knapsack(float p[], float wt[], int ind, float w)
{
    float pw[ind + 1] = {0};
    float profit = 0;
    for (int i = 0; i <= ind; i++)
    {
        pw[i] = p[i] / wt[i];
    }
    float Knap[ind + 1] = {0};
    while (w > 0)
    {
        int max = -1;
        int index = -1;
        for (int i = 0; i <= ind; i++)
        {
            if (Knap[i] == 0)
            {
                if (pw[i] > max)
                {
                    max = pw[i];
                    index = i;
                }
            }
        }

        if (wt[index] <= w)
        {
            profit += p[index];
            w = w - wt[index];
            Knap[index] = 1;
        }
        else
        {

            float t = ((w / wt[index]) * p[index]);

            profit = profit + t;
            w = 0;
            Knap[index] = 1;
        }
    }
    for (int i = 0; i <= ind; i++)
    {
        cout << Knap[i] << " ";
    }
    cout << endl;
    return profit;
}
int main()
{   int s;
    
    cout<<"no of element in profit/weight"<<endl;
    cin>>s;
    float p[s] ;
    float wt[s];
    cout<<"enter element in profit"<<endl;
    for(int i=0;i<s;i++){
        cin>>p[i];
    }
     cout<<"enter element in weight"<<endl;
    for(int i=0;i<s;i++){
        cin>>wt[i];
    }
    
    cout << Knapsack(p, wt, s-1, 15) << endl;
    return 0;
}