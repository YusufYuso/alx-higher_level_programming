#!/usr/bin/python3
"""Define a class Square."""


class Square:
    """
    Represents a square.

    Attributes:
        __size (int): The size of the square.

    Methods:
        __init__(size): Initializes a Square instance with a specified size.

    Args:
        size (int): The size of the square.
    """

    def __init__(self, size):
        """
        Initializes a Square instance with a specified size.

        Args:
            size (int): The size of the square.
        """
        self.__size = size
