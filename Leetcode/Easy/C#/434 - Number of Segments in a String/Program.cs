using System;

namespace _434___Number_of_Segments_in_a_String
{
    class Program
    {
        public class Solution
        {
            public int CountSegments(string s) {
                if(s == ""){
                    return 0;
                }
                int segmentCount = 0;
                bool wasLastCharASpace;
                if(s[0] == ' '){
                    wasLastCharASpace = true;
                }
                else{
                    segmentCount++;
                    wasLastCharASpace = false;
                }
                foreach(char c in s){
                    if(c != ' '){
                        if(wasLastCharASpace){
                            segmentCount++;
                            wasLastCharASpace = false;
                        }
                    }
                    else{
                        wasLastCharASpace = true;
                    }
                }
                return segmentCount;
            }
        }
        static void Main(string[] args)
        {
            Solution solution = new Solution();
            Console.WriteLine(solution.CountSegments("Hello, my name is John")); // 5
            Console.WriteLine(solution.CountSegments("Hello")); // 1
            Console.WriteLine(solution.CountSegments("love live! mu'sic forever")); // 4
            Console.WriteLine(solution.CountSegments("")); // 0
        }
    }
}
