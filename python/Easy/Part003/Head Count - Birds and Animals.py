# Read inputs H and L
H = int(input().strip())
L = int(input().strip())

# Calculate the number of birds (B) and animals (A)
B = (4 * H - L) // 2
A = H - B

# Print the results
print(B, A)
