# Q47.py - Program to Multiply Two Matrices Using Multi-dimensional Arrays
rows1 = int(input("Enter rows of first matrix: "))
cols1 = int(input("Enter cols of first matrix: "))
rows2 = int(input("Enter rows of second matrix: "))
cols2 = int(input("Enter cols of second matrix: "))
if cols1 != rows2:
    print("Cannot multiply matrices")
else:
    matrix1 = [list(map(int, input(f"Enter row {i+1} of first matrix: ").split())) for i in range(rows1)]
    matrix2 = [list(map(int, input(f"Enter row {i+1} of second matrix: ").split())) for i in range(rows2)]
    result = [[sum(matrix1[i][k]*matrix2[k][j] for k in range(cols1)) for j in range(cols2)] for i in range(rows1)]
    print("Product of matrices:")
    for row in result:
        print(row)