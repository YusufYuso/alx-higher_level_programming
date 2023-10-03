#!/usr/bin/python3
def islower(c):
    check = ord(c)
    if check in range(97, 123):
        return True
    else:
        return False
