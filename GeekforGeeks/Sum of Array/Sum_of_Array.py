class Solution():
    def _sum(self, arr, n):
        ans = sum(arr)
        return ans


if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob._sum(arr, n)
        print(ans)
        tc = tc - 1
