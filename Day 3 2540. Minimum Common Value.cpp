class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
          int m = 0 , n = 0;
        while( m < nums1.size() && n < nums2.size() )
        {
            if( nums1[m] == nums2[n] ) return nums2[n];
            else if ( nums1[m] < nums2[n] ) m++;
            else n++;
        }
        return -1;
    }
};