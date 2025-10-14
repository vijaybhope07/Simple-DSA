def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

num = int(input("Enter number of terms: "))
for i in range(num):
    print(fibonacci(i), end=" ")
