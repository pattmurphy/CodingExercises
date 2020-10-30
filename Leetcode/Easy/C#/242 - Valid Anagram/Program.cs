using System;
using System.Collections.Generic;

namespace _242___Valid_Anagram
{
    class Program
    {
        public class Solution {
            public bool IsAnagram(string s, string t) {
                if(s.Length != t.Length){
                    return false;
                }
                Dictionary<char, int> sDict = new Dictionary<char, int>();
                Dictionary<char, int> tDict = new Dictionary<char, int>();

                for(int i = 0; i < s.Length; i++){
                    if(sDict.ContainsKey(s[i])){
                        sDict[s[i]] += 1;
                    }
                    else{
                        sDict[s[i]] = 1;
                    }
                    if(tDict.ContainsKey(t[i])){
                        tDict[t[i]] += 1;
                    }
                    else{
                        tDict[t[i]] = 1;
                    }
                }
                foreach(KeyValuePair<char, int> pair in sDict){
                    if(!tDict.ContainsKey(pair.Key)){
                        return false;
                    }
                    if(tDict[pair.Key] != pair.Value){
                        return false;
                    }
                }
                return true;
            }
}
        static void Main(string[] args)
        {
            Solution solution = new Solution();

            Console.WriteLine(solution.IsAnagram("anagram", "nagaram")); // true
            Console.WriteLine(solution.IsAnagram("rat", "car")); // false
        }
    }
}
