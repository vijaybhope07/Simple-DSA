# Q46.py - Program to Add Two Matrices Using Multi-dimensional Arrays
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))
matrix1 = [list(map(int, input(f"Enter row {i+1} of first matrix: ").split())) for i in range(rows)]
matrix2 = [list(map(int, input(f"Enter row {i+1} of second matrix: ").split())) for i in range(rows)]
result = [[matrix1[i][j] + matrix2[i][j] for j in range(cols)] for i in range(rows)]
print("Sum of matrices:")
for row in result:
    print(row)