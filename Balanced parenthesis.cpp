// Balanced parenthesis .

#include <iostream>
#define size 10
using namespace std;

bool match(char a, char b) {

  if (a == ']' && b == '[') {
    return 1;
  } else if (a == '}' && b == '{') {
    return 1;
  } else if (a == ')' && b == '(') {
    return 1;
  }

  return 0;
}
int main() {
  string s;
  cout << "ENTER YOUR STRING" << endl;
  cin >> s;
  char stack[size];
  int top = -1;
  int i = 0;
  if (s[i] == ']' || s[i] == '}' || s[i] == ')') {
    cout << "UNBALANCED PARENTHESIS" << endl;
    return 0;
  }
  while (s[i] != '\0') {
    if (top == size - 1) {
      cout << "Stack is overflow" << endl;
      return 0;
    }
    if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
      top++;
      stack[top] = s[i];
    } else if (s[i] == ']' || s[i] == '}' || s[i] == ')') {
      if (match(s[i], stack[top])) {
        top--;
      } else {
        cout << "Invalid parenthesis" << endl;
        return 0;
      }
    }
    i++;
  }
  if (top == -1) {
    cout << "valid parenthesis" << endl;
  } else {
    cout << "invalid parenthesis" << endl;
  }
  return 0;
}