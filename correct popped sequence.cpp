// check wheather the popped sequence is correct or not .

#include <iostream>
using namespace std;
int main() {
  int size;
  cin >> size;
  int array1[size];
  int array2[size];
  int stack[size], top = -1, j = 0;
  cout << "Enter pushed elements" << endl;
  for (int i = 0; i < size; i++)
    cin >> array1[i];
  cout << "Enter popped elements" << endl;
  for (int i = 0; i < size; i++)
    cin >> array2[i];
  for (int i = 0; i < size; i++) {
    top++;
    stack[top] = array1[j];
    while (top > -1 && stack[top] == array1[j]) {
      top--, j++;
    }
  }

  if (j == size) {
    cout << "VALID SEQUENCE" << endl;
  } else {
    cout << "INVALID SEQUENCE" << endl;
  }
  return 0;
}