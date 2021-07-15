class NumArray {

    private int[] nums;

    public NumArray(int[] nums) {
        this.nums = nums;
    }
    
    public int sumRange(int left, int right) {
        int sum = 0;
        for(int i = left; i <= right; i++){
            sum += this.nums[i];
        }
        return sum;
    }

    public static void main(String[] args){
        int[] n1 = {-2, 0, 3, -5, 2, -1};
        NumArray numArray = new NumArray(n1);
        System.out.println(numArray.sumRange(0, 2)); // 1
        System.out.println(numArray.sumRange(2, 5)); // -1
        System.out.println(numArray.sumRange(0, 5)); // -3
    }
}



/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */