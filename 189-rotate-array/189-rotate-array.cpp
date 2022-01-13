class Solution {
public:
    void reverse (vector<int>& nums,int k,int start,int end){
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
   
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int n=nums.size()-1;
        if (n==0) return;
        reverse(nums,k,0,n-k);
        reverse(nums,k,n-k+1,n);
        reverse(nums,k,0,n);
    }
};