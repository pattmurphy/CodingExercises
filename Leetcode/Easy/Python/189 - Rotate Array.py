class Solution:
    def rotateArray(self, nums, k):
        temp = []
        for i in range(len(nums)):
            temp.append(nums[(i-k)%len(nums)])
        for i in range(len(nums)):
            nums[i] = temp[i]

solution = Solution()
nums = [1,2,3,4,5,6,7]
solution.rotateArray(nums, 3)
print(nums)

nums = [-1]
solution.rotateArray(nums, 2)
print(nums)
