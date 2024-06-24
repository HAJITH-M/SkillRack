def main():
    # Input for string S
    S = input().strip()
    
    upper_case_count = 0
    
    # Loop through each character in the string
    for c in S:
        if c.isupper():
            upper_case_count += 1
    
    # Print the count of uppercase letters
    print(upper_case_count)

if __name__ == "__main__":
    main()
