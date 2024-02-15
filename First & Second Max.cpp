/*Find the 1st and second maximum numbers in a given arary.

Example 1 :
INPUT ARRAY : [2,4,6,7,8,3]
OUTPUT : 8  7

Example 2 :
INPUT ARRAY :[9,45,45,23,19]
OUTPUT : 45 23  */


#include <iostream>
using namespace std;
int main()
{
        int arr[] = {12, 5, 10, 7, 8, 12};
        int Max = arr[0], SecMax;
        for (int i = 1; i < 6; i++)
                arr[i] > Max ? SecMax = Max, Max = arr[i] : arr[i] > SecMax && arr[i] != Max ? SecMax = arr[i]
                                                                                             : SecMax;
        cout << Max << "\t" << SecMax;
        return 0;
}