def main():
    
    n = int(input().strip())

    sum_first_innings = 0
    sum_second_innings = 0
    
    for _ in range(n):
        line = input().strip()
        first_innings, second_innings = map(int, line.split())
        
        sum_first_innings += first_innings
        sum_second_innings += second_innings
    
    avg_first_innings = sum_first_innings / n
    avg_second_innings = sum_second_innings / n
    
    print(f"{avg_first_innings:.2f}")
    print(f"{avg_second_innings:.2f}")

if __name__ == "__main__":
    main()
