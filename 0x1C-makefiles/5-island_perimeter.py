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
    sides = 0
    for list in grid:
        for i in list:
            if i == 0:
                continue
            if i == 1:
                sides += 4
                if grid[list][i - 1] == 1:
                    sides -= sides
                if grid[list][i + 1] == 1:
                    sides -= sides
                if grid[list - 1][i] ==1:
                    sides -= sides
                if grid[list + 1][i] ==1:
                    sides -= sides
    return sides
