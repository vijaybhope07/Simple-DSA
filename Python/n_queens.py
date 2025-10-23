def solveNQueens(n):
    l = [["."] * n for _ in range(n)]
    ans=[]
    def valid(i,j):
        for k in range(n):
            if l[k][j]=="Q" or l[i][k]=="Q":return False

        for x in range(n):
            for y in range(n):
                if x + y == i + j and l[x][y] == "Q":
                    return False
                if x - y == i - j and l[x][y] == "Q":
                    return False
        return True
        
    def rec(i):
        if i==n:
            ans.append(["".join(row) for row in l])
            return

        for j in range(n):
            if valid(i, j):
                l[i][j] = "Q"
                rec(i + 1)
                l[i][j] = "."
    rec(0)
    return ans