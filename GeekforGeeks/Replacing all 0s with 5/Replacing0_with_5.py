class Solution:
    def convertFive(self, n):
        res = 0
        count = 1
        while n:
            rem = n % 10
            res += count * (5 if rem == 0 else rem)
            count *= 10
            n //= 10
        return res


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        print(Solution().convertFive(n))
