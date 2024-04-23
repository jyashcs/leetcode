// check wheather the popped sequence is correct or not. NOte : Only valid for sorted array's .

#include <iostream>
using namespace std;
int main() {
  int size;
  cin >> size;
  int pushedary[size];
  int poppedary[size];
  int stack[size], top = -1, j = 0;
  cout << "Enter pushed elements" << endl;
  for (int i = 0; i < size; i++)
    cin >> pushedary[i];
  cout << "Enter popped elements" << endl;
  for (int i = 0; i < size; i++)
    cin >> poppedary[i];
  for (int i = 0; i < size; i++) {
    top++;
    stack[top] = pushedary[j];
    while (top > -1 && stack[top] == pushedary[j]) {
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