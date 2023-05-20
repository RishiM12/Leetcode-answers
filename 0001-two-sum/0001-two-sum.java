class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> h = new HashMap<Integer, Integer>();

        for (int i=0; i<nums.length; i++){
            int complement = target-nums[i];
            if (h.containsKey(complement)){
                int[] ans = {i, h.get(complement)};
                return ans;
            }
            h.put(nums[i],i);
        } 
        return null;
    }
}