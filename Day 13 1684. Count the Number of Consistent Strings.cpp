class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      int arr[26] = {0};
      int count = 0;
      for(auto it : allowed)
      arr[it-'a']++;
      for(auto it : words){
        bool test = true;
        for(auto i : it){
            if(arr[i-'a']==0){
                test = false;
                break;
            }
        }
        if(test) count++;
      }
      return count;
    }
};