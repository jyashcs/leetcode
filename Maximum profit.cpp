/*# You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

solution : */

#include <iostream>
using namespace std;
int main() {
    int arr[]={6,5,9,2,4,6,7,1};
 int i=0,Max=0;
   for (int j=1; j < sizeof(arr)/sizeof(arr[0]); j++) {
       i = (arr[i] > arr[j]) ? j: i;
       arr[j]-arr[i];
       Max = Max < arr[j]-arr[i] ? arr[j]-arr[i]: Max;
   }
   cout<<Max;
    return 0;
}