#include <iostream>
#include <bits/stdc++.h>
//   /1
//     diagonal =   1
//     left=3
//     up= 2
//     1/

using namespace std;
void LCS(int **arr, string A, int i, int j)
{

    if (i == 0 || j == 0)
    {

        return;
    }
    else
    {
        if (arr[i][j] == 2)
        {

            LCS(arr, A, i, j - 1);
        }
        else if (arr[i][j] == 3)
        {

            LCS(arr, A, i - 1, j);
        }
        else
        {

            cout << A[i];
            LCS(arr, A, i - 1, j - 1);
        }
    }
}

int main()
{
    string A = "XYZYTXY";
    string B = "YTZXYX";
    int m = A.length();
    int n = B.length();
    // cout<<m<<" "<<n<<endl;
    int SeqLen[m + 1][n + 1];
    int Dir[m + 1][n + 1];

    // diagonal =   1
    // left=3
    // up= 2
    // 1/

    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                SeqLen[i][j] = 0;
                Dir[i][j] = '0';
            }
        }
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (A[i - 1] == B[j - 1])
            {
                SeqLen[i][j] = SeqLen[i - 1][j - 1] + 1;
                Dir[i][j] = '1';
            }
            else if (A[i - 1] != B[j - 1])
            {
                SeqLen[i][j] = max(SeqLen[i - 1][j], SeqLen[i][j - 1]);
                if (SeqLen[i - 1][j] == SeqLen[i][j - 1])
                {
                    Dir[i][j] = '2';
                }
                else if (SeqLen[i - 1][j] > SeqLen[i][j - 1])
                {
                    Dir[i][j] = '2';
                }
                else
                {
                    Dir[i][j] = '3';
                }
            }
        }
    }
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << SeqLen[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n"
         << endl;
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << Dir[i][j] << " ";
        }
        cout << endl;
    }

    LCS((int **)Dir, A, m, n);

    return 0;
}