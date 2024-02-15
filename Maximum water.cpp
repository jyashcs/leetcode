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