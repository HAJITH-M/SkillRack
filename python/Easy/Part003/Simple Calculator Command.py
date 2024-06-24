def main():
    S = input().strip()  # Read the entire input line and strip any whitespace
    
    num1 = 0
    num2 = 0
    operation = ''
    
    # Find the position of the operation character
    for char in S:
        if char in 'ASMDasmd':
            operation = char
            pos = S.index(char)
            num1 = int(S[:pos].strip())
            num2 = int(S[pos+1:].strip())
            break
    
    # Perform the operation based on the character
    if operation == 'A' or operation == 'a':
        result = num1 + num2
    elif operation == 'S' or operation == 's':
        result = num1 - num2
    elif operation == 'M' or operation == 'm':
        result = num1 * num2
    elif operation == 'D' or operation == 'd':
        if num2 != 0:
            result = num1 // num2  # Perform integer division
        else:
            return 1  # Exit with error
    else:
        return 1  # Exit with error
    
    # Output the result
    print(result)

if __name__ == "__main__":
    main()
