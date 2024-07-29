class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size() - 1;
        unordered_map<int, int> count;

        for (int num : nums)
            count[num]++;

        if (count[n] != 2) return false;
        for (int i = 1; i < n; ++i)
            if (count[i] != 1) return false;

        return true;
    }
};