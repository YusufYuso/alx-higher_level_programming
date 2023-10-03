#!/usr/bin/python3
for first in range(10):
    for second in range(first + 1, 10):
        if str(first) + str(second) != "89":
            print("{0}{1}, ".format(first, second), end="")
        else:
            print("{0}{1}".format(first, second))
