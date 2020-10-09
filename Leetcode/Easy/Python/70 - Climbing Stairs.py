class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return 1
        uniqueWays = 0
        for x in range(n+1):
            for y in range(n):
                if x + 2*y == n:
                    uniqueWays += 1
        return uniqueWays

solution = Solution()
print(solution.climbStairs(1))
print(solution.climbStairs(2))
print(solution.climbStairs(3))
print(solution.climbStairs(4))
