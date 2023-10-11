#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str) or None:
        return 0
    roman = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}

    result = 0
    prev = 0

    for key in roman_string[::-1]:
        current = roman[key]
        if current < prev:
            result -= current
        else:
            result += current
        prev = current

    return result
