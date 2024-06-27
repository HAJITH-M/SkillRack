def main():
    input_line = input().strip()

    integers = input_line.split()
    integers = list(map(int, integers))
    
    total_sum = sum(integers)
    
    print(total_sum)

if __name__ == "__main__":
    main()