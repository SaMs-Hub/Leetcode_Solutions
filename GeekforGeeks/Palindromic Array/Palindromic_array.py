def PalinArray(arr, n):
    new = [True if str(i) == str(i)[::-1] else False for i in arr]
    return (all(new))


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        if PalinArray(arr, n):
            print(1)
        else:
            print(0)
