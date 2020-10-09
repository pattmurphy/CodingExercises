class Solution:
    def isLongPressedName(self, name: str, typed: str) -> bool:
        nameCount, y = 1, 0
        for x in range(len(name)):
            if x < len(name)-1:
                if name[x] == name[x+1]:
                    nameCount += 1
                    continue
            if y > len(typed) -1 or name[x] != typed[y]:
                return False
            typedCount = 0
            while name[x] == typed[y]:
                typedCount += 1
                y += 1
                if y == len(typed):
                    break
            if nameCount > typedCount:
                return False
            nameCount = 1
        if y < len(typed):
            return False
        return True

solution = Solution()
print(solution.isLongPressedName("pyplrz", "ppyypllr")) # false
print(solution.isLongPressedName("alex", "alexxr")) # false
print(solution.isLongPressedName("alex", "aaleex")) # true
print(solution.isLongPressedName("saeed", "ssaaedd")) # false
print(solution.isLongPressedName("leelee", "lleeelee")) # true
print(solution.isLongPressedName("laiden", "laiden")) # true