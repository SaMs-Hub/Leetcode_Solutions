for x in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    start = 0
    end = n - 1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1
    print(*arr)
