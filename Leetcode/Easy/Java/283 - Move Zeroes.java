import java.util.Arrays;

class MoveZeroes {
    public void moveZeroes(int[] nums) {
        int betweenZeroCount = 0 ;
        for(int i = 0; i<nums.length; i++){
            if(nums[i] == 0){
                betweenZeroCount++;
            }
            if(nums[i] != 0 && betweenZeroCount > 0){
                nums[i-betweenZeroCount] = nums[i];
                nums[i] = 0;
                i -= betweenZeroCount;
                betweenZeroCount = 0;
            }
        }
    }

    public static void main(String[] args){
        MoveZeroes solution = new MoveZeroes();
        int[] n1 = {0,1,0,3,12};
        solution.moveZeroes(n1);
        System.out.println(Arrays.toString(n1));
    }
}