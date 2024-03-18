#include <iostream>
using namespace std;
void MergeArray(int arr[], int s, int mid, int e)
{
    int temparr[e - s + 1];
    int indx1 = s;
    int indx2 = mid + 1;
    int i = 0;
    while (indx1 <= mid && indx2 <= e)
    {
        if (arr[indx1] < arr[indx2])
        {
            temparr[i] = arr[indx1];
            i++;
            indx1++;
        }
        else
        {
            temparr[i] = arr[indx2];
            i++;
            indx2++;
        }
    }
    while (indx1 <= mid)
    {
        temparr[i] = arr[indx1];
        i++;
        indx1++;
    }
    while (indx2 <= e)
    {
        temparr[i] = arr[indx2];
        i++;
        indx2++;
    }
    int j=0;//new array tyracking
    for(int i=s;i<=e;i++){
            if(j<e-s+1){
                arr[i]=temparr[j];
            }
            j++;
    }
}

void MergeSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);
    MergeArray(arr, s, mid, e);
}
int main()
{
    int arr[] = {-26, 23, 17, 0, 34, -54, 65, 27};
    MergeSort(arr, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}