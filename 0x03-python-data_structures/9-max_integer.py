#!/usr/bin/python3
def max_integer(my_list=[]):
    if not my_list:
        return None
    max_item = my_list[0]
    for i in my_list:
        if i > max_item:
            max_item = i
    return max_item
