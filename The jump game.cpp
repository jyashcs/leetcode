/* You are given an integer array nums. You are initially positioned at the
array's first index, and each element in the array represents your maximum jump
length at that position.

Return true if you can reach the last index, or false otherwise.

Example 1:

Input: nums = [2,3,1,1,4]
Output: true

Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

Example 2:

Input: nums = [3,2,1,0,4]
Output: false

Explanation: You will always arrive at index 3 no matter what. Its maximum jump
length is 0, which makes it impossible to reach the last index.

solution : */
#include <iostream>
using namespace std;
int torf(int arr[], int i, int j, int Size) {
  while (i < Size) {
    if (j >= Size - 1)
      return true;
    if (arr[i] == 0 && arr[j] == 0)
      return false;
    arr[j] == 0 ? i++, j = 1 : j += arr[j];
  }
}
int main() {
  int arr[] = {3, 2, 2, 0, 4};
  int Size = sizeof(arr) / sizeof(arr[0]);
  int i = 0, j = 0;
  int answer = torf(arr, i, j, Size);
  cout << answer << endl;
  return 0;
}