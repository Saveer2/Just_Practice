def muilt(x,y):
    z = 2*x+5*y+45
    return z

output = muilt(3.24,54)
print(output)
print(muilt(2.3,34))

def funtion(x):
    y = 3
    z = 3*x*y
    return z
print(funtion(4))
y = funtion(10)
print(y)

def conct(x,y):
    z = x + " " + y
    return z
print(conct("Name :","Sam"))

def f1(x,y):
    z = x*100
    a = y*100
    b = z*a
    if b>1000:
        return b+100
    else:
        return b-100
a = f1(10,20)
print(a)

def f2(x,y):
    eq = x*y + x+y - 37
    if eq>0:
        eq = 6
    else:
        eq = 37
    return eq
print(f2(10,20))

def rating_value(rating = 5.5):
    if rating < 8:
        return f'you should not watch this film with the rating value of {rating}'
    else : 
        return f'You must watch this film with the rating value of {rating}'
print(rating_value())

lang = 'Python'

def language(lang):
    global_var = lang
    print(f"{lang} is a programing language")

language(lang)

def total(*args):
    total = 0
    for i in args:
        total += i
    return total
print("Total : ",total(10.22,0.33,0.44,0.55))


 #Defineafunctionregardingtheadditionofelementsintoalist
def addition(nlist):
    nlist.append(5)
    nlist.append(6)
    nlist.append(7)
    nlist.append(8)
    nlist.append(9)
    nlist.append(10)
my_list = [2,3,4,5,6,7]
addition(my_list)
print(my_list)
print(sum(my_list))
print(min(my_list))
print(max(my_list))
print(len(my_list))

#nested funtions
def added_num(num1):
    def incremented_num(num1):
        num1 = num1+1
        return num1
    num2 = incremented_num(num1)
    print(num1,'---->>',num2)

added_num(100)


#Exception Handling in Python
'''
#1. ZeroDivisionError
try:
    1/0
except ZeroDivisionError:
    print("This code gives a ZeroDivisionError!!")
print(1/0)
'''

try:
    print(name)
except NameError:
    print("Since the variable name is not defined, the function gives a NameError.")

num1 = float(input("Enter a number : "))
print("The selected value is :",num1)
try:
    num2=float(input("Enter a number : "))
    print("The entered value is : ",num2)
    value = num1/num2
    print('Thisprocessisrunningwithvalue=',value)
except ZeroDivisionError:
    print('ThisfunctiongivesaZeroDivisionErrorsinceanumbercannotdivideby0.')
except ValueError:
    print('Youshouldprovideanumber.')
except:
    print('Soethingwentwrong!')