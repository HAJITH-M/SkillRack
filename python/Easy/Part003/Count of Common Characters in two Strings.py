from collections import Counter

# Input reading
S1 = input().strip()
S2 = input().strip()

# Count characters in both strings
count_S1 = Counter(S1)
count_S2 = Counter(S2)

# Find common characters and count
common_count = 0

# Iterate through characters in S1 and count common characters
for char in count_S1:
    if char in count_S2:
        common_count += 1

# Output the count of common characters
print(common_count)
