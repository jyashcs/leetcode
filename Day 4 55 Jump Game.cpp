class Solution {
public:
    bool canJump(vector<int>& nums) {

        int reachable = 0;
        int n = nums.size();
        for( int i = 0; i < n; ++i )
        {
            if( reachable >= n-1) return true;
            else if( i > reachable ) return false;
            reachable = max(i+nums[i],reachable);
        }
        return true;
    }
};