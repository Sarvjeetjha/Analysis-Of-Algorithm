#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter no of element  in text array" << endl;
    cin >> n;
    cout << "enter no of element in pattern array" << endl;
    cin >> m;
    int text[n];
    int pat[m];

    cout << "enter element in text array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> text[i];
    }
  
    cout << "enter element in pattern array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> pat[i];
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = sum * 10 + pat[i];
    }


    int p1=sum;
    int q = n;
    int h1 = p1 % q;
    int h2;

    int lt = sizeof(text) / sizeof(text[0]);
    int lp = sizeof(pat) / sizeof(pat[0]);

    for (int i = 0; i < lt - 1; i++)
    {
        int k = i;
        int s = 0;

        for (int j = i; j < i + 2; j++)
            s = s * 10 + text[j];
        h2 = s;
        // cout<<h2<<"    ";
        // cout<<" h2"<<h2<<endl;

        if ((h2 % q) == h1)
        {
            int m = 0;
            for (int j = i; j < i + 2; j++)
            {

                if (text[j] != pat[m])
                {

                    break;
                }
                else
                {
                    if (m == 1)
                    {
                        cout <<"pattern matched at:-" << k <<"  index"<< endl;
                    }
                }
                m++;
            }
        }
    }

    return 0;
}