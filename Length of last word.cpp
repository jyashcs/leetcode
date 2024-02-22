/*Length of Last Word
Given a string s consisting of words and spaces, return the length of the last word in the string.

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
solution  */
#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char str[1000] = "THE WORLD IS IN THE DARK";
    int length = strlen(str) - 1, count = 0;
    while (str[length] != ' ')
        count++, length--;
    cout << count << endl;
    return 0;
}