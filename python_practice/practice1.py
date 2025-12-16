print("Hello World")

age = 23
price = 23.33
aa =34.2
name = "sam"

print("age : ",age)
print(type(age))
print(type(price))
print(type(name))
print(type(aa))

a =2
b = 5
sum = a+b
print(sum)

""" multi line comment!! """
#comments


#Type conversion : 1) conversion 2)  casting

#1) conversion
a=2
b= 4.25
sum = a+b

print(sum)

#2) Type Casting
a = int("2") # It is converted from string to integer
b = 3
sum = a+b
print(sum)



#input from user
name = input("Enter your Name : ") # It's type is string as it converts everything to string
print("Hello ",name)

age = int(input("Enter your Age : ")) # converted to integer
print(type(age),age)




#practice question 1
print("Addition!!")
a = int(input("Enter first : "))
b = int(input("Enter first : "))

sum = a+b
print("Sum : ",sum)


#practice question 2
print("Area of square")
side = int(input("Enter Side of square : "))
print("Area : ",side*side)


#practice question 3
print("Average of two float numbers")
aa = float(input("Enter first : "))
bb = float(input("Enter first : "))
print("avg : ", (aa+bb)/2)


#practice question 4
print(">=")
aaaa = int(input("Enter first : "))
bbbb = int(input("Enter first : "))
print(aaaa>=bbbb)