using System;

namespace _796___Rotate_String
{
    class Program
    {
        public class Solution {
            public bool RotateString(string A, string B) {
                int length = A.Length;
                if(length != B.Length){
                    return false;
                }
                if(A == B){
                    return true;
                }
                for(int i = 0; i < length; i++){
                    if(A[i] == B[0]){
                        for(int j = 1; j < length; j++){
                            if(A[(i + j) % length] != B[j]){
                                break;
                            }
                            if(j == length - 1){
                                return true;
                            }
                        }
                    }
                }
                return false;
            }
        }
        static void Main(string[] args)
        {
            Solution solution = new Solution();
            Console.WriteLine(solution.RotateString("abcde", "cdeab")); // true
            Console.WriteLine(solution.RotateString("abcde", "abced")); // false
            Console.WriteLine(solution.RotateString("", "")); // true
        }
    }
}
