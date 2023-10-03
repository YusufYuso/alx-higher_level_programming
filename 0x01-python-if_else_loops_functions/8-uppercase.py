#!/usr/bin/python3
def uppercase(str):
    string = ""
    for char in str:
        if ord(char) in range(97, 123):
            check = ord(char) - 32
            string = string + chr(check)
        elif ord(char) == 32:
            string = string + " "
        else:
            check = ord(char)
            string = string + chr(check)
    print("{}".format(string))
