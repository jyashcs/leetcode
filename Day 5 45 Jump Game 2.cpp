class Solution {
public:
    int jump(vector<int>& nums) {
        if( nums.size() == 1 )  return 0;

        int coverage = 0 , lastJmpIdx = 0 , totalJumps = 0 , n = nums.size();
        for( int i = 0; i < n; i++)
        {
            coverage = max(coverage,(i+nums[i]));

            if( i == lastJmpIdx )
            {
                lastJmpIdx = coverage;
                totalJumps++;

                 if( coverage >= n-1 ) return totalJumps;
            }
        }
        return totalJumps;
    }
};

// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         int furthest = 0, tmp = 0, cnt = 0;
//         while (furthest < nums.size() - 1) {
//             int tmpFar = furthest;
//             for(int j = tmp; j <= tmpFar; j++) {
//                 if (j + nums[j] > furthest) {
//                     furthest = j + nums[j];
//                     tmp = j;    
//                 }
//             }
//             cnt++;
//         }
//         return cnt;
//     }
// };