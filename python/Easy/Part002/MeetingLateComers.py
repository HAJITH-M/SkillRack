def main():
    input_line = input().strip()
    arrival_times = input_line.split()
    meeting_start_time = (10, 0)
    late_comers_count = 0
    for arrival in arrival_times:
        hours, minutes = map(int, arrival.split(':'))
        if (hours, minutes) > meeting_start_time:
            late_comers_count += 1
    print(late_comers_count)

if __name__ == "__main__":
    main()
