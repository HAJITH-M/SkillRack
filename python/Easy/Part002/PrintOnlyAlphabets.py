def extract_alphabets(s):
    result = ''.join([char for char in s if char.isalpha()])
    return result
S = input()
print(extract_alphabets(S))
