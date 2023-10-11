#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new = [[num**2 for num in row] for row in matrix]
    return new
