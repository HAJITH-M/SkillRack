def find_missing_alphabet(s):
    left = 0
    right = len(s) - 1

    while left < right:
        if s[left] != s[right]:
            if s[left + 1] == s[right] and (left + 1 == right or s[left + 2] == s[right - 1]):
                return s[left]
            else:
                return s[right]
        left += 1
        right -= 1

# Input
S = input()

# Find and print the missing alphabet
print(find_missing_alphabet(S))
