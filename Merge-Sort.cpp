// Merge sort program .
#include <iostream>
using namespace std;
void Merge(int arr[], int st, int mid, int end)
{

    int n1 = mid - st + 1;
    int n2 = end - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[st + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = st;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void MergeSort(int arr[], int st, int end)
{
    if (st < end)
    {
        int mid = (st + end) / 2;
        MergeSort(arr, st,mid);
        MergeSort(arr, mid + 1, end);
        Merge(arr, st, mid, end);
    }
}
int main()
{

    int n;
    cout << "ENTER SIZE OF THE ARRAY" << endl;
    cin >> n;
    int arr[n];
    cout << "ENTER ARRAY ELEMENTS" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    MergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";

    return 0;
}