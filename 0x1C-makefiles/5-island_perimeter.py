#!/usr/bin/python3
'''
technical interview preparation
'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    # get number of rows and columns
    no_of_rows = len(grid)
    no_of_columns = len(grid[0])
    # initialize perimeter to 0
    perimeter = 0
    # iterate over the rows then retaliate all columns for each row
    for i in range(no_of_rows):
        for j in range(no_of_columns):
            # check if it's a one. if so continue
            if grid[i][j] == 1:
                # start of with a perimeter of 4. Assume only one cell
                perimeter += 4
                # after addition. Check if the neighbors are land or water
                # if land subtract, water otherwise
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < no_of_rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < no_of_columns - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1
    return (perimeter)
