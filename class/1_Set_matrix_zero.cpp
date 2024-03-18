// Set matrix to zero
#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    cout << "enter value in array" << endl;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
            {
                // changing that row
                for (int k = 0; k < 3; k++)
                {
                    if (a[i][k] != 0)
                        a[i][k] = -1;
                }
                for (int m = 0; m < 3; m++)
                {
                    if (a[m][j] != 0)
                        a[m][j] = -1;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == -1)
            {
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}