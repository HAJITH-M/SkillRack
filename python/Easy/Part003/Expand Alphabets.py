# Read the entire input line
S = input().strip()

result = ""  # To store the expanded string
count = 0

# Traverse through the input string
i = 0
while i < len(S):
    if S[i].isdigit():
        count = count * 10 + int(S[i])  # Handle multi-digit numbers
    else:
        result += S[i] * count  # Repeat the character count times
        count = 0  # Reset count for the next number
    i += 1

# Output the expanded string
print(result)
