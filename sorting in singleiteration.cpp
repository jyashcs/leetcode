/*You are given 3 different numbers (0's , 1's , 2's) in unsorted order in an array like : [0,1,1,2,0,1,2,0,2], now you have to
sort this array in a single iteration.

Example 1 :

        INPUT ARRAY : [1,2,0,1,2,0]
        OUTPUT ARRAY : [0,0,1,1,2,2]

Example 2 :

        INPUT ARRAY : [0,1,1,2,0,1,2,0,2]
        OUTPUT ARRAY : [0,0,0,1,1,1,2,2,2]

Solution : */

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 0, 1, 2, 0};
    int low = 0, temp, mid = 0, high = sizeof(arr) / sizeof(arr[0]) - 1;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        if (arr[mid] == 0)
        {
            temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        if (arr[mid] == 1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    for (int i = 0; i < 6; i++)
        cout << arr[i] << "\t";
    return 0;
}