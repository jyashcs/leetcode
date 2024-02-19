/*You are given an integer array and a key element, you have to find the first
and last occurence (index) of key element using recursion only.

Example 1 :

INPUT ARRAY : [1,2,3,2,4]   KEY = 2
OUTPUT  : 1 3

Example 2 :

INPUT ARRAY : [1,3,5,8,6]  KEY = 3
OUTPUT  : 1 1

SOLUTION :  */
#include <iostream>
using namespace std;
int FirstNdex(int arr[], int n, int i, int key) {
  if (i == n)
    return -1;
  if (arr[i] == key)
    return i;
  return FirstNdex(arr, n, i + 1, key);
}
int LastNdex(int arr[], int n, int i, int key) {
  if (i == n)
    return -1;
  int RestArray = LastNdex(arr, n, i + 1, key);
  if (RestArray != -1)
    return RestArray;
  if (arr[i] == key)
    return i;
  return -1;
}
int main() {
  int n;
  cout << "ENTER ARRAY SIZE" << endl;
  cin >> n;
  int arr[n];
  cout << "ENTER ARRAY ELEMENTS" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int key;
  cout << "ENTER KEY ELEMENT" << endl;
  cin >> key;
  cout << FirstNdex(arr, n, 0, key) << " ";
  cout << LastNdex(arr, n, 0, key) << endl;
  return 0;
}