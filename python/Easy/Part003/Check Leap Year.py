def is_leap_year(year):
    if year % 400 == 0:
        return True
    elif year % 100 == 0:
        return False
    elif year % 4 == 0:
        return True
    else:
        return False

# Input the year
year = int(input("Enter a year: "))

# Check if the year is a leap year and print the result
if is_leap_year(year):
    print("yes")
else:
    print("no")
