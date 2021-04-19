def multiply(A,B,C,n):
    for i in range(n):
        for j in range(n):
            for k in range(n):
                C[i][k] += A[i][j] * B[j][k]


if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        matrix1 = [[0 for i in range(n)]for j in range(n)]
        c=0
        for i in range(n):
            for j in range(n):
                matrix1[i][j] = arr[c]
                c+=1
        arr = list(map(int, input().strip().split()))
        matrix2 = [[0 for i in range(n)]for j in range(n)]
        c=0
        for i in range(n):
            for j in range(n):
                matrix2[i][j] = arr[c]
                c+=1
        matrix3 = [[0 for i in range(n)]for j in range(n)]
        multiply(matrix1, matrix2, matrix3, n)
        for i in range(n):
            for j in range(n):
                print(matrix3[i][j], end=" ")
        print ('')
