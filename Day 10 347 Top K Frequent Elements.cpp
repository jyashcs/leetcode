class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(auto& it : nums)
        map[it]++;
        int max_size = nums.size();
        vector<vector<int>> buckets(max_size+1);
        for(auto& it : map)
        buckets[it.second].push_back(it.first);
        vector<int> res;
        for(int i = nums.size(); i >= 0; i--){
            for(auto it : buckets[i]){
                res.push_back(it);
                if(res.size() == k) return res;
            }
        }
        return res;
    }
};