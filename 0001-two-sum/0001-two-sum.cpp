class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> m;

       for (int i=0;i<nums.size();i++){
           int complement = target-nums[i];
           if (m.find(complement)!=m.end()){
               vector<int> sol;
               sol.push_back(i);
               sol.push_back(m.find(complement)->second);
               return sol;
           }
           m[nums[i]]=i;
       }
       return vector<int>();
    }
};