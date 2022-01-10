class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_pos=-1;
        int count=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==0 && count==0)
            {
                zero_pos=i;
                count++;
            }
            if (nums[i]!=0 && zero_pos!=-1){
                nums[zero_pos]=nums[i];
                nums[i]=0;
                zero_pos++;
            } 
        }
    }
};