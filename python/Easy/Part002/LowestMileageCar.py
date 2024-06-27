# Input
input_string = input()

# Splitting the input string by spaces to get each car's information
cars = input_string.split()

# Initialize variables to keep track of the car with the lowest mileage
lowest_mileage_car = None
lowest_mileage = float('inf')

# Iterate over each car's information
for car in cars:
    name, mileage = car.split('@')
    mileage = float(mileage)  # Convert mileage to float
    
    # Update the car with the lowest mileage
    if mileage < lowest_mileage:
        lowest_mileage_car = name
        lowest_mileage = mileage

# Output the car with the lowest mileage
print(lowest_mileage_car)
