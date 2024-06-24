# Read the floating point value F from input
F = float(input().strip())

# Convert rupees to paise and round to the nearest integer
paise = round(F * 100)

# Print the integer value representing paise
print(paise)
