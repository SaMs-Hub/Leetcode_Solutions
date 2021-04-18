def printPat(n):
    result = ""
    for i in range(n, 0, -1):
        t = []
        for j in range(n, 0, -1):
            t.extend([str(j) * i])
        result += " ".join(t)
        result += " $"
    return result


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        print(printPat(n))
