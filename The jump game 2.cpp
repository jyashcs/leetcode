/*Jump Game II
You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].
Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if 
you are at nums[i], you can jump to any nums[i + j] 
where:
0 <= j <= nums[i] and i + j < n
Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].

Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

Example 2:

Input: nums = [2,3,0,1,4]
Output: 2

Solution  */
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 1, 1, 4};
    int jump = 0, current = 0, furthest = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        furthest = max(furthest, arr[i] + i);
        if (i == current)
        {
            current = furthest;
            jump++;
        }
    }
    cout << jump;
    return 0;
}