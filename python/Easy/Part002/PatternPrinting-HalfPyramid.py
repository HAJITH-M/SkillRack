# Input
N = int(input())

# Printing the half pyramid
for i in range(1, N + 1):
    print(' '.join(['*' for _ in range(i)]))
