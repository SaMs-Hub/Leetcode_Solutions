def isBinary(str):
    for i in str:
        if i not in "01":
            return False
        return True


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        str = input().strip()
        if isBinary(str):
            print(1)
        else:
            print(0)
