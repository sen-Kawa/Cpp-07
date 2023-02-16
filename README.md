# C++ Module 07
## Templates

### ex00 - Intro to templates

Implement the following function templates:

• swap: Swaps the values of two given arguments. Does not return anything.

• min: Compares the two values passed in its arguments and returns the smallest
one. If the two of them are equal, then it returns the second one.

• max: Compares the two values passed in its arguments and returns the greatest one.
If the two of them are equal, then it returns the second one.

These functions can be called with any type of argument. The only requirement is
that the two arguments must have the same type and must support all the comparison
operators.

### ex01 - Iter

Implement a function template iter that takes 3 parameters and returns nothing.

• The first parameter is the address of an array.
• The second one is the length of the array.
• The third one is a function that will be call on every element of the array.
