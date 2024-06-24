import sys
import math
from collections import Counter

def find_factors(num):
    factors = []
    for i in range(2, num + 1):  # Start from 2 to exclude 1
        if num % i == 0:
            factors.append(i)
    return factors

def is_common_factor(nums, factor):
    for num in nums:
        if num % factor != 0:
            return False
    return True

def main():
    input = sys.stdin.read().strip().split()
    N = int(input[0])
    nums = list(map(int, input[1:N+1]))
    
    # Find the smallest number in the list
    smallest = min(nums)
    
    # Find all factors of the smallest number
    factors = find_factors(smallest)
    
    # Count how many of these factors are common to all numbers in the list
    common_factor_count = 0
    for factor in factors:
        if is_common_factor(nums, factor):
            common_factor_count += 1
    
    # Print the count of common factors excluding 1
    print(common_factor_count)

if __name__ == "__main__":
    main()
