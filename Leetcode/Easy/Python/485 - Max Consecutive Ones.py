class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        curr_max = 0
        total_max = 0
        for num in nums:
            if num == 1:
                curr_max = curr_max + 1
                continue
            if curr_max > total_max:
                total_max = curr_max
            curr_max = 0
        if curr_max > total_max:
            total_max = curr_max
        return total_max

solution = Solution()
print(solution.findMaxConsecutiveOnes([1,1,0,1,1,1]))
