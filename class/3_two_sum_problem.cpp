// two sum problem
#include <iostream>
using namespace std;
int main()
{
    int a[10];

    cout << "enter element " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    int tar = 14;
    cout << "index of row and column is " << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (a[i] + a[j] == tar)
            {
                cout << i << " " << j << endl;
            }
        }
    }

    // int i=0;
    // int j=5;
    // while(i<=j){
    //     if(a[i]+a[j]==tar){
    //         cout << i << " " << j << endl;
    //         break;

    //     }
    //     else if(a[i]+a[j]<tar){
    //         i++;
    //     }
    //     else{
    //         j--;
    //     }
    // }
    // return 0;
}