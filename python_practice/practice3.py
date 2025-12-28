#list 

mylist = ["apple","banana"]
print(mylist)
print(len(mylist))

mylist2 = ["apple",40,"banana",50]
print(mylist2)
print(len(mylist2))
print(mylist2[2])

mylist2[2] = "pineapple"
print(mylist2[2])
print(mylist)

#append items
mylist2.append("orange")
print(mylist2)

#insert
mylist2.insert(5,"orange")
print(mylist2)
print(len(mylist2))

#remove
mylist2.remove("orange")
print(mylist2)
print(len(mylist2))

#pop
mylist2.pop(1)
print(mylist2)

#if-else and elif statements
num1 = int(input("Enter Number a : "))
num2 = int(input("Enter Number b : "))

if num1 > num2 :
    print("a is greater than b")
elif num1 == num2:
    print("a is equals to b")
else :
    print("b is greater than b")

#shorthand if 

num3 = 30
num4 = 50
print("num3 is greater than num 4") if num3 > num4 else print("num 4 is greater than num3")

#logical operators
#And Operator
if num1 > num2 and num3 < num4 :
    print("Yes")
else :
    print("No")
#Or Operator
if num1>num2 or num1<num2 : 
    print("Yes")
else :
    print("No")
#Not Operator
if not num1>num2 : 
    print("num1 is not greater than num2")
else :
    print("num 2 is not greater than num1")

#nested if
if num1>5 :
    print("num1 is greater than 5")
    if num1>10:
        print("num1 is greater than 10")
    else :
        print("NOO")

#match statement
#it is same like switch statement
match num1:
    case 1 :
        print("Num1 is 1")
    case 2 :
        print("Num1 is 2")

