#!/usr/bin/python3
'''
Module to define island grid
'''


def island_perimeter(grid):
    '''
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    '''
    grid_len = len(grid)
    list_len = len(grid[0])
    sides = 0
    for list in range(0, grid_len):
        for i in range(0, list_len):
            if grid[list][i] == 1:
                sides += 4
                if i > 0 and grid[list][i - 1] == 1:
                    sides -= 1
                if i + 1 < list_len and grid[list][i + 1] == 1:
                    sides -= 1
                if list > 0 and grid[list - 1][i] == 1:
                    sides -= 1
                if list + 1 < grid_len and grid[list + 1][i] == 1:
                    sides -= 1
    return sides
