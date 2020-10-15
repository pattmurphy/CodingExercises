using System;

namespace _443___String_Compression
{
    class Program
    {
        public class Solution
        {
            public int Compress(char[] chars)
            {
                if(chars.Length == 1)
                {
                    return 1;
                }
                String returnString = "";
                char currentChar = chars[0];
                int currentCharCount = 1;
                for(int i=1; i<chars.Length; i++)
                {
                    if(chars[i] == currentChar)
                    {
                        currentCharCount++;
                        if(i < chars.Length - 1)
                        {
                            continue;
                        }
                    }
                    returnString += currentChar;
                    if(currentCharCount > 1)
                    {
                        foreach(char c in currentCharCount.ToString().ToCharArray())
                        {
                            returnString += c;
                        }
                    }
                    currentChar = chars[i];
                    currentCharCount = 1;
                    if(currentChar != chars[i-1] && i == chars.Length - 1)
                    {
                        returnString += currentChar;
                        break;
                    }
                }
                for(int i = 0; i < returnString.Length; i++){
                    chars[i] = returnString[i];
                }
                Array.Clear(chars, returnString.Length, chars.Length - returnString.Length);
                return returnString.Length;
            }
        }
        static void Main(string[] args)
        {
            Solution solution = new Solution();

            char[] a1 = {'a','a','a'};
            Console.Write(solution.Compress(a1) + ": ");
            foreach(char c in a1)
            {
                Console.Write(c);
            }
            Console.WriteLine();
            char[] a2 = {'a','b','b'};
            Console.Write(solution.Compress(a2) + ": ");
            foreach(char c in a2)
            {
                Console.Write(c);
            }
            Console.WriteLine();
            char[] a3 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
            Console.Write(solution.Compress(a3) + ": ");
            foreach(char c in a3)
            {
                Console.Write(c);
            }
            Console.WriteLine();
            char[] a4 = {'a','b','b','b','b','b','b','b','b','b','b','b','b','c'};
            Console.Write(solution.Compress(a4) + ": ");
            foreach(char c in a4)
            {
                Console.Write(c);
            }
            Console.WriteLine();
        }
    }
}
