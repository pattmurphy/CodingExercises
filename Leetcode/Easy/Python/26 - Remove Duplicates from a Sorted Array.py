class Solution:
    def removeDuplicates(self, nums) -> int:
        length = len(nums) - 1
        x = 0
        while x < length:
            if nums[x] == nums[x+1]:
                nums.pop(x+1)
                length -= 1
                continue
            x += 1
        return len(nums)


solution = Solution()
print(solution.removeDuplicates([]))  # 0
print(solution.removeDuplicates([0]))  # 1
print(solution.removeDuplicates([0, 1]))  # 2
print(solution.removeDuplicates([0, 1, 1, 2]))  # 3
