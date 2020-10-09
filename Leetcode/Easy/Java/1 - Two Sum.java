class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] ansArray = {0, 0};
        for(int i = 0; i < nums.length; i++){
            for(int j = 0; j < nums.length; j++){
                if(i == j){
                    continue;
                }
                if(nums[i] + nums[j] == target){
                    ansArray[0] = i;
                    ansArray[1] = j;
                    return ansArray;
                }
            }
        }
        return ansArray;
    }
    public static void main(String[] args) throws Exception {

        Solution s = new Solution();

        int[] nums = {2, 4, 1};
        int[] ans = s.twoSum(nums, 3);
        System.out.println(ans[0] + ", " + ans[1]);
    }
}