#range
x = range(10)
print(x)

for x in range(10):
    print(x)

print(list(range(5)))
print(list(range(1,6)))
print(list(range(2,10,20)))

#slicing in range
x = range(10)
print(x[:5])
print([4])
print(len(x))

#array in python
cars =["Ford","Volvo","BMW"]
print(cars[0])
print(cars[1])
print(cars[2])
print(len(cars))

for x in cars:
    print(x)
cars.append("honda")
cars.extend(["Activa","Audi"])
print(cars)
print(len(cars))
print(type(cars))

for x in cars:
    print(x)

cars.pop(1)
cars.pop(2)
for x in cars:
    print(x)

