using System;

namespace _121___Best_Time_to_Buy_and_Sell_Stock
{
    class Program {
        public class Solution {
            public int MaxProfit(int[] prices){
                int maxDifference = 0;
                for(int i=0; i<prices.Length; i++){
                    for(int j=i+1; j<prices.Length; j++){
                        int difference = prices[j] - prices[i];
                        if(difference > maxDifference){
                            maxDifference = difference;
                        }
                    }
                }
                return maxDifference;
            }
        }
        static void Main(string[] args){
            Solution solution = new Solution();
            int[] prices1 = {7,1,5,3,6,4};
            Console.WriteLine(solution.MaxProfit(prices1));
            int[] prices2 = {7,6,4,3,1};
            Console.WriteLine(solution.MaxProfit(prices2));
        }
    }
}
