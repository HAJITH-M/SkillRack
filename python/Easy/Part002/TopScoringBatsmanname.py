def main():
    try:
        n = int(input().strip())
        top_batsman = ""
        top_score = -1
        for _ in range(n):
            line = input().strip()
            name, score_str = line.split(',')
            score = int(score_str)
            if score > top_score:
                top_score = score
                top_batsman = name
        print(top_batsman)
    except EOFError:
        print("Error: Not enough input provided")
    except ValueError as e:
        print(f"Error: Invalid input format ({e})")
if __name__ == "__main__":
    main()