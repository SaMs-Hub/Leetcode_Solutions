from statistics import median


class Solution:
    def find_median(self, v):
        return int(median(v))


if __name__ == "__main__":
    T = int(input())
    for i in range(T):
        n = int(input())
        v = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.find_median(arr, n)
        print(ans)
