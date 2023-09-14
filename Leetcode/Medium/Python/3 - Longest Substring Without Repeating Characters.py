class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_length = 0
        current_substring = ""
        for i in range(len(s)):
            for j in range(i, len(s)):
                if s[j] in current_substring:
                    break
                current_substring += s[j]
            size = len(current_substring)    
            if size > max_length:
                max_length = size    
            current_substring = ""
        return max_length

solution = Solution()
print(solution.lengthOfLongestSubstring("abcabcbb")) # 3
print(solution.lengthOfLongestSubstring("xxxxxxxxxx")) # 1
print(solution.lengthOfLongestSubstring("pwwkew")) # 3
print(solution.lengthOfLongestSubstring("a")) # 1
