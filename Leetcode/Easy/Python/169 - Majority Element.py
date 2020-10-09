class Solution:
    def majorityElement(self, nums: [int]) -> int:
        count = {}
        for x in range(len(nums)):
            if nums[x] in count.keys():
                count[nums[x]] = count[nums[x]] + 1
                continue
            count[nums[x]] = 1
        for num in count.keys():
            if count[num] == max(count.values()):
                return num

solution = Solution()
print(solution.majorityElement([1, 2, 3, 1, 5, 1]))
print(solution.majorityElement([1, 2, 3, 1, 5, 1, 1, 1, 1, 1, 1]))
print(solution.majorityElement([2, 2, 2]))
