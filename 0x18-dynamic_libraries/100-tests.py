import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.addition(a, b)))
print("{} - {} = {}".format(a, b, cops.subtraction(a, b)))
print("{} x {} = {}".format(a, b, cops.multiplication(a, b)))
print("{} / {} = {}".format(a, b, cops.division(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
