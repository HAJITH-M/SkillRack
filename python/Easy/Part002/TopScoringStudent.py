def main():
    n = int(input().strip())
    top_student = ""
    top_score = -1
    
    for _ in range(n):
        line = input().strip()
        parts = line.split(':')
        name = parts[0]
        marks = list(map(int, parts[1:]))
        total_score = sum(marks)
        
        if total_score > top_score:
            top_score = total_score
            top_student = name
    
    
    print(top_student)

if __name__ == "__main__":
    main()