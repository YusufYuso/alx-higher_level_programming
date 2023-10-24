#!/usr/bin/python3
"""
Define a class Square.

This class represents a square
and includes methods for setting and getting its size,
as well as calculating its area.
"""


class Square:
    """
    A class representing a square.

    Attributes:
        __size (int): The size of the square.

    Methods:
        area(): Calculate the area of the square.
    """

    def __init__(self, size=0):
        """
        Initializes a Square instance with a specified size.

        Args:
            size (int, optional): The size of the square (default is 0).

        Raises:
            TypeError: If size is not an integer.
            ValueError: If size is less than 0.
        """
        self.__size = size

    @property
    def size(self):
        """
        Get the size of the square.

        Returns:
            int: The size of the square.
        """
        return self.__size

    @size.setter
    def size(self, value):
        """
        Set the size of the square.

        Args:
            value (int): The size to set.

        Raises:
            TypeError: If value is not an integer.
            ValueError: If value is less than 0.
        """
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """
        Calculate the area of the square.

        Returns:
            int: The area of the square.
        """
        return self.__size**2
