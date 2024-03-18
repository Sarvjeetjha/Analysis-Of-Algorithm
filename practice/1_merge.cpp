#include <iostream>
using namespace std;
void merge(int arr[], int s, int mid, int e)
{
    int temp[e - s + 1];
    int i = 0;
    int s1 = s;
    int s2 = mid + 1;
    while (s1 <= mid && s2 <= e)
    {
        if (arr[s1] < arr[s2])
        {
            temp[i] = arr[s1];
            i++;
            s1++;
        }
        else
        {
            temp[i] = arr[s2];
            i++;
            s2++;
        }
    }
    while (s1 <= mid)
    {
        temp[i] = arr[s1];
        i++;
        s1++;
    }
    while (s2 <= e)
    {
        temp[i] = arr[s2];
        i++;
        s2++;
    }
    int j = 0;
    for (int i = s; i <= e; i++)
    {

        arr[i] = temp[j];
        j++;
    }
}
void mergesort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    else
    {
        int mid = (s + e) / 2;
        mergesort(arr, s, mid);
        mergesort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}
int main()
{
    int arr[] = {4, 3, 2, 1, 6, 5};
    mergesort(arr, 0, 5);
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}