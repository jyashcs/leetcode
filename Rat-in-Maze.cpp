/*Given a 2D array of size n (will be the square matrix) this array is gonna act like a maze, assume a "Rat" is in the maze at [0][0]th position
where 1's represents the path and 0's represents obstracles, now you have to help the rat to get out of the maze by showing the path i.e (1's).

Example :

input maze : 1 0 1 0 1
             1 1 1 1 1
             0 1 0 1 0
             1 0 0 1 1
             1 1 1 0 1

output path : 1 0 0 0 0
              1 1 1 1 0
              0 0 0 1 0
              0 0 0 1 1
              0 0 0 0 1
Solution : */

#include <iostream>
using namespace std;

bool path(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
        return true;
    return false;                                              
}

bool RatinMaze(int **arr, int x, int y, int n, int **Solarr)
{
    if (x == n - 1 && y == n - 1)
    {
        Solarr[x][y] = 1;
        return true;
    }
    if (path(arr, x, y, n))
    {
        Solarr[x][y] = 1;
        if (RatinMaze(arr, x + 1, y, n, Solarr))
            return true;
        else if (RatinMaze(arr, x, y + 1, n, Solarr))
            return true;
    }
    Solarr[x][y] = 0; // BACKTRACKING
    return false;
}
int main()
{
    int n;
    cout << "ENTER ARRAY SIZE" << endl;
    cin >> n;
    int **arr = new int *[n];     // Declaring array dynamically
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];
    cout << "ENTER ARRAY ELEMENTS" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **Solarr = new int *[n];
    for (int i = 0; i < n; i++)
        Solarr[i] = new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Solarr[i][j] = 0;
        }
    }
    cout << "THE WAY :" << endl;
    if (RatinMaze(arr, 0, 0, n, Solarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << Solarr[i][j] << "\t";
            }
            cout << endl;
        }

        return 0;
    }
    else
        cout << "There is no way" << endl;
    return 0;
}