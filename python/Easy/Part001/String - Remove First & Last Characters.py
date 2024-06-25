def main():
    # Input for string S
    S = input().strip()

    # Ensure the length of S is at least 3 (as per boundary conditions)
    if len(S) >= 3:
        # Output the substring from index 1 to (length - 2)
        print(S[1:-1])

if __name__ == "__main__":
    main()
