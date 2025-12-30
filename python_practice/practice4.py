#dictionaries
print("\n\n** Dictionaries")
mydict = {"Name" : "Sam", "Age": 20}
print(mydict)
print(type(mydict))
print(len(mydict))

#access items
print(mydict["Name"])
print(mydict["Age"])
x = mydict.keys()
y = mydict.items()
z = mydict.values()
print(x)
print(y)
print(z)

#change values
mydict1 = {
    "brand" : "Ford",
    "model" : "Mustang",
    "year" : 1964
}
mydict1["year"] = 2025
print(mydict1)

#adding items
mydict1["color"] = "red"
print(mydict1)

#removing items
mydict1.pop("color")
print(mydict1)



#for loops
print("\n\n** For Loops")

fruits = ["apple", "banana", "cherry"]
for x in fruits:
    print(x)

#using break statement
for x in fruits:
    print(x)
    if x == "banana":
        break
    print(x)

#using continue statement
for x in fruits:
    print(x)
    if x == "banana":
        continue
    print(x)

#using range()
for x in range(6):
    print(x)

#Nested loops
for x in range(6):
    for y in range(6):
        print(x," ",y)
    


