# Input reading
dice_rolls = input().strip()
X = int(input().strip())
Y = int(input().strip())

# Initializing gain and loss
total_gain = 0
total_loss = 0

# Calculate total gain and loss
for roll in dice_rolls:
    if roll.isdigit():  # Ensure the character is a digit
        number = int(roll)
        if number % 2 == 0:  # Even number
            total_loss += Y
        else:  # Odd number
            total_gain += X

# Calculate net gain or loss
net_result = total_gain - total_loss

# Output the result
print(net_result)
