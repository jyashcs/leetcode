/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n
representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.

Example 1:

Input: nums1 = [1,2,3], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

Solution : */
#include <iostream>
using namespace std;
void merge(int array1[], int array2[], int n, int m)
{
    int sortedarray[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if (array1[i] == array2[j])
        {
            sortedarray[k] = array1[i];
            k++;
            sortedarray[k] = array2[j];
            k++, i++, j++;
        }
        if (array1[i] < array2[j])
        {
            sortedarray[k] = array1[i];
            k++, i++;
        }
        if (array1[i] > array2[j])
        {
            sortedarray[k] = array2[j];
            k++, j++;
        }
    }
    while (i < n)
    {
        if (array1[i] != 0)
        {
            sortedarray[k] = array1[i];
            i++, k++;
        }
        else
            i++;
    }

    while (j < n)
    {
        if (array1[j] != 0)
        {
            sortedarray[k] = array1[j];
            j++, k++;
        }
        else
            j++;
    }
    for (int i = 0; i < (n + m); i++)
        cout << sortedarray[i];
}
int main()
{
    int n;
    cout << "ENTER 1st ARRAY SIZE " << endl;
    cin >> n;
    int m;
    cout << "ENTER 2nd ARRAY SIZE " << endl;
    cin >> m;
    int firstarray[n];
    cout << "ENTER 1st ARRAY ELEMENTS " << endl;
    for (int i = 0; i < n; i++)
        cin >> firstarray[i];
    int secondarray[m];
    cout << "ENTER 2st ARRAY ELEMENTS " << endl;
    for (int i = 0; i < n; i++)
        cin >> secondarray[i];
    merge(firstarray, secondarray, n, m);
    return 0;
}