#!/usr/bin/python3
def remove_char_at(str, n):
    if n > len(str) or n < 0:
        return str
    else:
        for i in str:
            if i == str[n]:
                return str[:n] + str[n + 1:]
