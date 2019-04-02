# Fastest python solution on leetcode!
class Solution:
    def reverse(self, x: int) -> int:
        remainder = x
        sign = 1
        digits = []

        if remainder < 0:
            sign = -1
            remainder *= -1
        while(remainder > 0):
            digits.append(remainder % 10)
            remainder //= 10

        tensplace = 10 ** (len(digits) - 1)
        result = 0

        for x in range(len(digits)):
            result += tensplace * digits[x]
            tensplace //= 10
        if result > 2147483647 or result < -2147483648:
            result = 0

        return result * sign
