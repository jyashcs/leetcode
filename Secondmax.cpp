#include <iostream>
using namespace std;
int main()
{
        int arr[] = {12, 5, 10, 7, 8, 12};
        int Max = arr[0], SecMax;
        for (int i = 1; i < 6; i++)
                arr[i] > Max ? SecMax = Max, Max = arr[i] : arr[i] > SecMax && arr[i] != Max ? SecMax = arr[i] : SecMax;
                                                                                                               
        cout << Max << "\t" << SecMax;
        return 0;
}