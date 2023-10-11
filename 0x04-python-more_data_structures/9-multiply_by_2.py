#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    multiply_2 = {x[0]: x[1] * 2 for x in a_dictionary.items()}
    return multiply_2
