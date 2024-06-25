def main():
    # Input for N
    N = int(input())

    # Boundary condition check (not necessary if inputs are guaranteed to be valid)
    if N < 2 or N > 100:
        return

    # Input for N integers
    numbers = [int(input()) for _ in range(N)]

    # Initialize the largest and second largest values
    largest = float('-inf')
    secondLargest = float('-inf')

    # Find the largest and second largest values
    for num in numbers:
        if num > largest:
            secondLargest = largest
            largest = num
        elif num > secondLargest and num != largest:
            secondLargest = num

    # Print the second largest integer
    print(secondLargest)

if __name__ == "__main__":
    main()
