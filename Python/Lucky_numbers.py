N = int(input())
 
 
lucky_numbers = [4, 7, 44, 47, 74, 77, 
                 444, 447, 474, 477, 
                 744, 747, 774, 777]
 
for ln in lucky_numbers:
    if N % ln == 0:
        print("YES")
        break
else:
    print("NO")
