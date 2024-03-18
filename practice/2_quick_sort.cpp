#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int piv = arr[s];
    int count = 0;
    int pivindex = s + count;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] < s)
        {
            count++;
        }
    }
    swap(arr[s], arr[pivindex]);

    int i = s;
    int j = e;
    while (i <= piv - 1 && j >= piv + 1)
    {
        while (arr[i] < piv)
        {
            i++;
        }
        while (arr[j] > piv)
        {
            j--;
        }

        swap(arr[i], arr[j]);and
        i++;
        j--;
    }
    return pivindex;
}
void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    else
    {
        int pivot = partition(arr, s, e);
        quicksort(arr, s, pivot - 1);
        quicksort(arr, pivot + 1, e);
    }
}
int main()
{
    int arr[] = {4, 3, 2, 1, 6, 5};
    quicksort(arr, 0, 5);
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
    return 0;
}