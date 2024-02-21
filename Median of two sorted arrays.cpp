/* Median of Two Sorted Arrays
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5

Solution : */
#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "ENTER SIZE OF 1ST ARRAY" << endl;
    cin >> n1;
    cout << "ENTER SIZE OF 2ND ARRAY" << endl;
    int n2;
    cin >> n2;
    int arr[n1];
    int arr_1[n2];
    cout << "ENTER 1ST ARRAY ELEMENTS" << endl;
    for (int i = 0; i < n1; i++)
        cin >> arr[i];
    cout << "ENTER 2nd ARRAY ELEMENTS" << endl;
    for (int i = 0; i < n2; i++)
        cin >> arr_1[i];
    int brr[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr[i] < arr_1[j])
        {
            brr[k] = arr[i];
            i++, k++;
        }
        else
        {
            brr[k] = arr_1[j];
            k++, j++;
        }
    }

    while (i < n1)
    {
        brr[k] = arr[i];
        k++, i++;
    }

    while (j < n2)
    {
        brr[k] = arr_1[j];
        k++, j++;
    }
    cout << endl
         << "MEDIAN = ";
    if ((n1 + n2) % 2 == 0)
    {
        float Median = ((brr[((n1 + n2) / 2) - 1] + brr[((n1 + n2) / 2)]));
        printf("%f", Median / 2);
    }
    else
    {
        float Median = brr[((n1 + n2) / 2)];
        printf("%f", Median);
    }
    return 0;
}