/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Example 1:

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:

Input: height = [1,1]
Output:1 
 
Solution : */

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 2, 4, 9, 6, 3, 2, 7};
    int Maxarea = 0, area, length, i = 0, j = sizeof(arr) / sizeof(arr[0]) - 1;
    while (i != j)
    {
        length = min(arr[i], arr[j]);
        area = length * (j - i);
        Maxarea = area > Maxarea ? area : Maxarea;
        arr[i] > arr[j] ? j-- : i++;
    }
    cout << Maxarea << endl;
    return 0;
}