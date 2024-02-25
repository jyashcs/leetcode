/*Given a array of size n, return maximum number of subarray's.

Example :

Input: arr = [1,2,3]
Output: 6

EXPLANATION : [[1],[2],[1,2],[3],[2,3],[1,2,3]] There are 6 number of sub-array's

Example 2 :

Input arr = [1,2,3,4]
Output : 10

Explanation : [[1],[2],[3],[4],[1,2],[1,2,3],[1,2,3,4],[2,3],[2,3,4],[3,4]] There are 10 number of sub-array's

solution :   */
#include <iostream>
using namespace std;
int subset(int arr[], int n)
{
    int i = 0, count = 0;
    while (i < n)
    {
        count += i + 1;
        i++;
    }
    return count;
}
int main()
{
    int n;
    cout << "ENTER ARRAY SIZE" << endl;
    cin >> n;
    int arr[n];
    cout << "ENTER ARRAY ELEMENTS" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << subset(arr, n) << endl;
    return 0;
}