# first attempt
class Solution1:
    def isPowerOfThree(self, n: int) -> bool:
        x = 0
        while x ** 3 <= n:
            if 3 ** x == n:
                return True
            x += 1
        return False


# Faster than 99.11 % of python solutions!
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n <= 0:
            return False
        if n == 1:
            return True
        while n > 1:
            if n / 3 != int(n / 3):
                return False
            n /= 3
        return True


solution = Solution()
print(solution.isPowerOfThree(27))  # true
print(solution.isPowerOfThree(0))  # false
print(solution.isPowerOfThree(9))  # true
print(solution.isPowerOfThree(45))  # false
print(solution.isPowerOfThree(27))  # true
print(solution.isPowerOfThree(0))  # false
print(solution.isPowerOfThree(59049))  # true
