class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagramGroups;

        for(auto& s : strs){
            string sortedStr = s;
            sort(sortedStr.begin(),sortedStr.end());
            anagramGroups[sortedStr].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it : anagramGroups)
        res.push_back(it.second);
        return res;
    }
};