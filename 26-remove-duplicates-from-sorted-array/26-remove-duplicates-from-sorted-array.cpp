class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int repeated=0;
        
        for (int i=1;i<nums.size();i++){
            
            if (nums[i]==nums[i-1]){
                repeated++;
            }
            else nums[i-repeated]=nums[i];
            
        }
        return nums.size()-repeated;
    }
};