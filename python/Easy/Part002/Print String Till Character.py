def main():
    # Input for string S
    S = input().strip()
    
    # Input for character C
    C = input().strip()
    
    # Find the position of character C in string S
    pos = S.find(C)
    if pos != -1:  # If C is found in S
        print(S[:pos])  # Print the substring of S before C
    else:
        print(S)  # If C is not found, print the entire string S

if __name__ == "__main__":
    main()
