using System;

namespace _27___Remove_Element
{
    class Program
    {
        public class Solution {
            public int RemoveElement(int[] nums, int val) {
                int numRemoved = 0;
                for(int i = 0; i < nums.Length; i++){
                    nums[i - numRemoved] = nums[i];
                    if(nums[i] == val){
                        numRemoved++;
                    }
                }
                return nums.Length - numRemoved;
            }
        }
        static void Main(string[] args)
        {
            Solution solution = new Solution();
            int[] n1 = {3,2,2,3};
            int len1 = solution.RemoveElement(n1, 3);
            for(int i = 0; i < len1; i++){
                if(i == len1 - 1){
                    Console.Write($"{n1[i]}\n");
                    break;
                }
                Console.Write($"{n1[i]}, ");
            } // [2, 2]
            int[] n2 = {0,1,2,2,3,0,4,2};
            int len2 = solution.RemoveElement(n2, 2);
            for(int i = 0; i < len2; i++){
                if(i == len2 - 1){
                    Console.Write($"{n2[i]}\n");
                    break;
                }
                Console.Write($"{n2[i]}, ");
            } // [0,1,3,0,4]
        }
    }
}
