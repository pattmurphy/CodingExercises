class Solution:
    def sortArrayByParity(self, A):
        sorted = []
        for i in range(len(A)):
            if A[i] % 2 == 0:
                sorted.insert(0, A[i])
            else:
                sorted.append(A[i])
        return sorted

solution = Solution()
a = [3,1,2,4]
print(solution.sortArrayByParity(a))
a = [0,1,2]
print(solution.sortArrayByParity(a))