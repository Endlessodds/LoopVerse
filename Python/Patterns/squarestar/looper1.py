row = int(input("Enter number of rows: "))
col = int(input("Enter number of columns: "))

original_col = col  # Save the original value

while row > 0:
    temp_col = original_col  # Reset column counter for each row
    while temp_col > 0:
        print("  *", end="")
        temp_col -= 1
    print()  # Move to the next line
    row -= 1
