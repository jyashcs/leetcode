/* You are given an n x n 2D matrix representing an image, rotate the image by
90 degrees (clockwise). You have to rotate the image in-place, which means you
have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix
and do the rotation.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

1 2 3                     7 4 1
4 5 6   output matrix ->  8 5 2
7 8 9                     9 6 3

Example 2:

Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
5  1  9  11                       15 13 2 5
2  4  8  10                       14 3  4  1
13 3  6  7      output matrix ->  12 6  8  9
15 14 12 16                       16 7 10 11  

solution :*/

#include <iostream>
using namespace std;
int main() {
  int row, column;
  cout << "ENTER ROW AND COLUMN SIZE OF TEH MATRIX" << endl;
  cin >> row >> column;
  int matrix[row][column];
  cout << "ENTER MATRIX ELEMENTS" << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> matrix[j][i];
    }
  }

  int i = 0, j = 0, num = column - 1, temp;
  while (j < num) {
    temp = matrix[i][j];
    matrix[i][j] = matrix[i][num];
    matrix[i][num] = temp;
    i++;
    if (i == row) {
      i = 0, j++, num--;
    }
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
