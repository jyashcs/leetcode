/**Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially.
The remaining elements of nums are not important as well as the size of nums.

Return k.

Custom Judge:
The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,-1]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are "-1").

Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,-1,-1,-1,-1,-1]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are "-1").

Solution :  */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER ARRAY SIZE"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER ARRAY ELEMENTS"<<endl;
    for(int i=0; i<n; i++)
    cin>>arr[i];        
    int i = 0, j = 1;
    int k = 0;
    while (j < n)
    {
        if (arr[i] == arr[j])
        {
            arr[j] = -1;
            k++;
        }
        else if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
            if (i != j)
            {
                arr[j] = -1;
            }
        }
        j++;
    }
    cout << k << endl;
    for (int i = 0; i < k; i++)
        cout << arr[i] << "\t";
    return 0;
}