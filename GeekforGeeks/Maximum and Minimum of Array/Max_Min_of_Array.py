tCase = int(input())
arr = []
while tCase > 0:
    size = int(input())
    for i in range(1):
        arr = list(map(int,input().split()))
    Max = max(arr)
    Min = min(arr)
    print(Max,Min)
    tCase -=1
