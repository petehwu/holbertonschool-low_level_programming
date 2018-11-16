#!/usr/bin/python3


def island_perimeter(grid):
    """ calculates perimeter of an island with horiz/vert connections only"""

    sq = 0
    neighbor = 0
    width = 0
    prevrow = []

    for row in grid:
        width = len(row) - 1
        for col in range(len(row)):
            if row[col] == 1:  # found land need to check for neighbors
                sq += 1
                if prevrow and prevrow[col] == 1:  # look for above
                    neighbor += 1
                if col < width and row[col + 1] == 1:  # look to right
                    neighbor += 1
        prevrow = row
    return (sq * 4 - neighbor * 2)
