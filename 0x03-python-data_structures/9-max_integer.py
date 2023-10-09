#!/usr/bin/python3
def max_integer(my_list=[]):
    max_item = 0
    if not my_list:
        return None
    for i in my_list:
        if i > max_item:
            max_item = i
    return max_item
