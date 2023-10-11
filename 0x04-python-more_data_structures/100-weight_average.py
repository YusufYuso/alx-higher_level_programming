#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0
    integers, weights = zip(*my_list)
    weighted_sum = sum(x * w for x, w in zip(integers, weights))
    total = sum(weights)
    average = weighted_sum / total
    return average
