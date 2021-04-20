
class Solution:
    def printArray(self, arr,n):
        for i in arr:
            print(i, end=" ")


if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ob.printArra7(arr,n)
        print()
        tc=tc-1
