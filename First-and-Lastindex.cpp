/* Find First and Last Position of Element in Sorted Array.
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

* You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

solution : */

#include <iostream>
using namespace std;
int firstandsecindex(int arr[], int size, int key);
int main()
{
    int arr[] = {1, 1, 2, 4, 4, 6, 7, 8, 8, 9, 9};
    int key;
    cout << "ENTER KEY ELEMENT" << endl;
    cin >> key;
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    int answer = firstandsecindex(arr, size, key);
    cout << answer << endl;
    if (answer == -1)
        cout << "-1,-1" << endl;
    else if (arr[answer] == arr[answer - 1])
        cout << answer - 1 << "," << answer;
    else if (arr[answer] == arr[answer + 1])
        cout << answer << "," << answer + 1;
    else
        cout << answer << "," << -1;
}

int firstandsecindex(int arr[], int size, int key)
{
    int start = 0, end = size;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            end = mid;
        if (arr[mid] < key)
            start = mid;
    }
    return -1;
}