/*Given an integer array nums, find the subarray with the largest sum, and
return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

Solution : */

#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "ENTER SIZE OF THE ARRAY" << endl;
  cin >> n;
  int arr[n], Sum, Max;
  cout << "ENTER ARRAY ELEMENTS" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  Max = arr[0];
  for (int i = 0; i < n - 1; i++) {
    Sum = arr[i];
    Max = Sum > Max ? Sum : Max;  // This line is here to check wheather the single element is a Maximum sub-array or not.
    for (int j = i + 1; j < n; j++) {
      Sum += arr[j];
      Max = Sum > Max ? Sum : Max;
    }
  }
  cout << Max << endl;
  return 0;
}