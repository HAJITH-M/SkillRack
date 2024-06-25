def gcd(x, y):
    while y:
        x, y = y, x % y
    return x

# Read input values
x = int(input().strip())
y = int(input().strip())

# Calculate and print the HCF
print(gcd(x, y))
