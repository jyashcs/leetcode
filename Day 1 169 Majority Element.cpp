
class Solution {
public:
  int majorityElement(vector<int> &nums) {
    unordered_map<int, int> countMap;
    int majorityElement = 0;
    int n = nums.size();

    for (int num : nums) {
      countMap[num]++;

      if (countMap[num] > n / 2) {
        majorityElement = num;
        break;
      }
    }

    return majorityElement;
  }
};
