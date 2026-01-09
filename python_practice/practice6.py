#Arbitary Arguments
#If you do not know how many arguments will be passed into your function, add a * before the parameter name.

def my_fun(*kids):
    print("My name is : ",kids) #it will print all names

my_fun("emily","sam","loid")
    
def my_fun1(*name):
    print("Type : ",type(name))

my_fun1("sam")

#scope
#1. local scope
def my_fun2():
    x = 300
    print(x)
my_fun2()
#2. Global scope
y=900
def my_fun4():
    print(y)
my_fun4()
print(y)

#Lambda funtions
#A lambda function is a small anonymous function.
#A lambda function can take any number of arguments, but can only have one expression.
z = lambda a:a+10
print(z(5))

z = lambda a:a-10
print(z(50))

z = lambda a,b:a*b
print(z(3,2))

def my_funt4(n):
    return lambda a:a*n
t = my_funt4(10)
print(t(5))

#recursion
"""Recursion is when a function calls itself.

Recursion is a common mathematical and programming concept. It means that a function calls itself. This has the benefit of meaning that you can loop through data to reach a result."""
def countdown(n):
    if n<=0:
        print("DONE")
    else:
        print(n)
        countdown(n-1)

countdown(10)

def count(n):
    if n<=0:
        print("DONE")
    else:
        print(n)
        count(n-1)
count(5)

def factorial(n):
    if n==1 or n==0:
        return 1
    else:
        return n*factorial(n-1)
print(factorial(5))

def fibonacci(n):
    if n<= 1:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)
print(fibonacci(7))

#Python has a limit on how deep recursion can go. The default limit is usually around 1000 recursive calls.
import sys
print(sys.getrecursionlimit())

#generators
"""Generators are functions that can pause and resume their execution.

When a generator function is called, it returns a generator object, which is an iterator."""
def mygen():
    yield 1
    yield 2
    yield 3
for value in mygen():
    print(value)

def mycount(n):
    count = 1
    while count<=n:
        yield count
        count += 1
for num in mycount(5):
    print(num)