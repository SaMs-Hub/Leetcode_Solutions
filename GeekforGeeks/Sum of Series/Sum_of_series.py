import math


class Solution:
    def seriesSum(self, n):
        if n % 2 == 0:
            return n * math.ceil(n / 2) + n // 2
        return n * math.ceil(n / 2)


if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        n = int(input())
        ob = Solution()
        ans = ob.seriesSum(n)
        print(ans)
        tc = tc - 1
