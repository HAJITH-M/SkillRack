# Read the entire input line
S = input().strip()

# Find the position of the first underscore
underscore_pos = S.find('_')

# Reverse the string up to the first underscore (if underscore exists)
if underscore_pos != -1:
    # Reverse the substring from start to underscore_pos
    reversed_part = S[:underscore_pos][::-1] + S[underscore_pos:]
else:
    # If underscore is not found, reverse the entire string
    reversed_part = S[::-1]

# Output the modified string
print(reversed_part)
