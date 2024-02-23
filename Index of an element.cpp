/*Given an intiger array (arr) of size n in sorted order and target, now you have to
find the correct occurence (index) of the target.

EXAMPLE 1 :

INPUT ARRAY : [1,2,3,5,6]
INPUT TARGET  :  2
OUTPUT : 1

Example 2 :

INPUT ARRAY :  [1,3,4,5,6]
INPUT TARGET : 2
OUTPUT  :  1

EXPLANATION :  Becouse 1st index element is in the worng order and target is the right element to be placed there.

EXAMPLE 3 :

 INPUT ARRAY  :  [1,2,3,4,5]
 INPUT TARGET : 6
 OUTPUT : 5

 Solution   */
#include <iostream>
using namespace std;
int correctindex(int arr[], int n, int target)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == target)
            return i;
        if (arr[i] + 1 == target)
            return i + 1;
        i++;
    }
    return -1;
}
int main()
{
    int n;
    cout << "ENTER SIZE OF THE ARRAY" << endl;
    cin >> n;
    int arr[n];
    cout << "ENTER ARRAY ELEMENTS" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cout << "ENTER TARGET" << endl;
    cin >> target;
    int answer = correctindex(arr, n, target);
    answer == -1 ? cout << "TARGET DOES NOT FOUND" << endl : cout << answer << endl;
    return 0;
}