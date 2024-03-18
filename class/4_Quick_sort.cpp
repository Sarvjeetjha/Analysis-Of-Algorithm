#include <iostream>
using namespace std;
int partition(int a[], int s, int e)
{
    int p = a[e];
    int i = s-1;
    for (int j = s; j <e; j++)
    {
        if (a[j] < p)
        {
            i++;
            swap(a[j], a[i]);
        }
    }
    swap(a[i +1], a[e]);
    return (i+1);
}
void QUicksort(int a[], int s, int e)
{
    if (s < e)
    {

        int pivot = partition(a, s, e);
        QUicksort(a, s, pivot - 1);
        QUicksort(a, pivot + 1, e);
    }
}
int main()
{
    int arr[] = {29, 23, 17, 57, 34, 89, 65, 27};
    QUicksort(arr, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}