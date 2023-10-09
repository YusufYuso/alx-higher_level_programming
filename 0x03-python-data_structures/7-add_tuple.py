#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    if len(tuple_a) > 2 or len(tuple_b) > 2:
        tuple_a = tuple_a[:2]
        tuple_b = tuple_b[:2]
    if len(tuple_a) < 2:
        missing_elements_a = 2 - len(tuple_a)
        zeros = (0,) * missing_elements_a
        tuple_a = tuple_a + zeros
    if len(tuple_b) < 2:
        missing_elements_b = 2 - len(tuple_b)
        zeros = (0,) * missing_elements_b
        tuple_b = tuple_b + zeros
    result = tuple([x + y for x, y in zip(tuple_a, tuple_b)])
    return result
