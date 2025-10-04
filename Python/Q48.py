# Q48.py - Program to Find Transpose of a Matrix
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))
matrix = [list(map(int, input(f"Enter row {i+1}: ").split())) for i in range(rows)]
transpose = [[matrix[j][i] for j in range(rows)] for i in range(cols)]
print("Transpose:")
for row in transpose:
    print(row)